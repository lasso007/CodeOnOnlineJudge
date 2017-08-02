#include<iostream>
using namespace std;
int combination(int N){
    if(N<0)
        return 0;
    if(N==0)
        return 1;
    return combination(N-1)+combination(N-5)+combination(N-10)+combination(N-20)+combination(N-50)+combination(N-100);
}
int main(){
    int N;
    while(cin>>N){
        if(N>0)
	    cout<<combination(N)<<endl;
        else
	    cout<<0<<endl;
    }
    return 0;
}
