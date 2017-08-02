#include<iostream>
#include<sstream>
using namespace std;
int FindMaxFactor(int A, int B){
    int n= A%B;
    while(n>0){
        A = B;
        B = n;
        n = A%B;
    }
    return B;
}
int main(){
    int A;
    while(cin>>A){
        int num = 0;
        for(int i=2;i<=A-1;++i){
            int temp = A;
            while(temp>0){
                num += temp%i;
                temp /= i;
            }
        }
        int factor = FindMaxFactor(num, A-2);
        cout<<num/factor<<"/"<<(A-2)/factor<<endl;
    }
    return 0;
}
