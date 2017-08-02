#include <iostream>
//#include <stdlib.h>
#include <cstdlib>
#include <vector>
#include <numeric>
#include<limits>
//#include<math.h>
#include<cmath>
#include<iomanip>
#define E 2.71828

using namespace std;

double func(double x, double y){
    return pow(x*x+y*y-1, 2) - x*x*y*y;
}
double Norm(double x, double mu, double sigma){
    return pow(E,-pow(x-mu,2)/(2*sigma*sigma))/(sqrt(2*M_PI)*sigma);
}
/** 请完成下面这个函数，实现题目要求的功能 **/
 /** 当然，你也可以不按照这个模板来作答，完全按照自己的想法来 ^-^  **/
double leartCurve(double mu1, double sigma1, double mu2, double sigma2) {
    double gap = 0.01f;
    double result = 0.0f;
    for(double x=-2.0f; x<=2; x+=gap)    
        for(double y=-2.0f; y<=2; y+=gap){
            if(func(x,y)<=0||(abs(x)<=1&&abs(y)<=1)){
                result += Norm(x,mu1,sigma1)*Norm(y,mu2,sigma2);
            }
        }    
    result *= gap*gap;
    return result;
}

int main() {
    double res;
    
    double _mu1;
    cin >> _mu1;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');

    double _sigma1;
    cin >> _sigma1;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');

    double _mu2;
    cin >> _mu2;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');

    double _sigma2;
    cin >> _sigma2;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');

    
    res = leartCurve(_mu1, _sigma1, _mu2, _sigma2);
    //cout << res << endl;
    cout << setiosflags(ios::fixed) << setprecision(1) << res << endl;
    
    return 0;

}

