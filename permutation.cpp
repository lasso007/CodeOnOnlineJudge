#include<iostream>
using namespace std;
void permutation(string s, int i, int n){
    if(i>n)
        cout<<s<<endl;
    else{
        char ch;
        for(int k=i;k<=n;++k){
            ch = s[k];
            s[k] = s[i];
            s[i] = ch;
            permutation(s,k+1,n);
            ch = s[k];
            s[k] = s[i];
            s[i] = ch;
        }
    }
}
int main(){
    string s;
    while(cin>>s){
        permutation(s,0,s.size()-1);
    }
    return 0;
}
