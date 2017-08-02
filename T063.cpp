#include<iostream>
using namespace std;
int f(int n){
    if(n<0)
        return 0;
    if(n<2)
        return 1;
    return f(n-1)+f(n-2)+f(n-3)+f(n-4)+f(n-5)+f(n-6);
}
int main(){
    int n;
    while(cin>>n){
        cout<<f(n)<<endl;
    }
    return 0;
}
