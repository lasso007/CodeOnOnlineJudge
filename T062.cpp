#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int low = -90;
        int high = 90;
        int mid;
        for(int i=0;i<6;++i){
            mid = (low+high)/2;
            if(n<mid){
                cout<<0;
                high = mid;
            }else{
                cout<<1;
                low = mid;
            }
        }
        cout<<endl;
    }
    return 0;
}
