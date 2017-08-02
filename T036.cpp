#include<iostream>
using namespace std;
int calc(const string &s, int left, int right){
    while(left<right){
        if(s[left]==s[right])
            return calc(s,left+1,right-1);
        else{
            int l = calc(s, left+1,right)+1;
            int r = calc(s, left,right-1)+1;
            return l<r ? l:r;
        }
    }
    return 0;
}
int main(){
    string s;
    while(getline(cin,s)){
        cout<<calc(s,0,s.size()-1)<<endl;
    }
    return 0;
}
