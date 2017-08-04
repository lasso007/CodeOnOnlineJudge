/*
  输入一个正整数n,求n!(即阶乘)末尾有多少个0？ 比如: n = 10; n! = 3628800,所以答案为2
*/

#include<iostream>
using namespace std;
int main(){
    int N;
    while(cin>>N){
        long long ans = 0;
        while(N>0){
            ans += N/5;
            N /= 5;
        }
        cout<<ans<<endl;
    }
}

/*
  1x2x3x4x...xn  中有多少是5的倍数，并且不断重复计算
*/
