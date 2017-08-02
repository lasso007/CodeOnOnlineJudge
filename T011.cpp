#include<iostream>
using namespace std;
int main(){
    
    int num;
    while(cin>>num){
        int count = 0;
        int tmp;
        while(num>0){
            tmp = num-1;
            num = num&tmp;
            ++count;
        }
        cout<<count<<endl;
    }
    return 0;
}
