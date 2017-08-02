#include<iostream>
using namespace std;
int main()
{
    
    int num;
    while(cin>>num){
        int factor = 2;
        while(factor<=num){
            if(num%factor==0){
                num = num/factor;
                cout<<factor<<" ";
            }
            else{
                ++factor;
            }
        }
        cout<<endl;
    }
    return 0;
}
