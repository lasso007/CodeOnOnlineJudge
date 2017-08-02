/*
  给你六种面额 1、5、10、20、50、100 元的纸币，假设每种币值的数量都足够多，编写程序求组成N元（N为0~10000的非负整数）的不同组合的个数。
*/
#include<iostream>
using namespace std;
  
int main(){
    int N = 0;
    cin >> N;
    long long * F = new long long[N + 1]();
    int c[6] = { 1, 5, 10, 20, 50, 100 };
  
    F[0] = 1;
    for (int i = 0; i < 6; i++)
        for (int v = c[i]; v <= N; v++){
            F[v] = F[v] + F[v - c[i]];
        }
    cout << F[N]<<endl;
    return 0;
}

