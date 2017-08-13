#include<iostream>
using namespace std;
int main(){
    int x,f,d,p;
    while(cin>>x>>f>>d>>p){
        int days = min(d/x, f);
        d = d-days*x;
        f = f- days;
        if(d>0){
            days += d/(x+p);
        }
        cout<<days<<endl;
    }

}

