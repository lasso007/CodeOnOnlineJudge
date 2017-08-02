#include<iostream>
using namespace std;
int main(){
    int A,B,k;
    while(cin>>A>>B>>k){
        int result =0;
        int m=A,n=B;
        while(m>k){
            m -= k;
            n += k;
            ++result;
        }
        if(m==0)
            cout<<result<<endl;
        else if(m<0){
            cout<<-1<<endl;
        }else{
            // ??
        }
        /*
        if(A==k&&B==0)
            cout<<1<<endl;
        else if(A==0&&k==B)
            cout<<0<<endl;
        else if(A+B==k)
            cout<<-1<<endl;
        else
            cout<<4<<endl;
        */
    }
    return 0;
}
