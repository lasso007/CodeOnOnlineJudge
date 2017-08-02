#include<iostream>
using namespace std;
int f(int A){
    int num = 0;
    while(A>0){
        num += A%10;
        A /= 10;
    }
    //cout<<"f(A):"<<num<<endl;
    return num;
}
int g(int A){
    int num = 0;
    while(A>0){
        num += A&0x01;
        A = A>>1;
    }
    //cout<<"g(A):"<<num<<endl;
    return num;
}
int main(){
    int n;
    while(cin>>n){
        int num = 0;
        for(int k=1;k<=n;++k){
            //cout<<"k:"<<k<<endl;
            if(f(k)==g(k))
                ++num;
        }
        cout<<num<<endl;
    }
    return 0;
}
