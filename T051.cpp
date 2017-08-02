#include<iostream>
using namespace std;
bool test(char m, char n){
    return (m=='T'&&n=='A')||(m=='A'&&n=='T')
            ||(m=='C'&&n=='G')||(m=='G'&&n=='C');
}

int calc(string s, string t){
    int res=0;
    for(int i=0;i<s.size();++i){
        if(!test(s[i],t[i]))
            ++res;
    }
    return res;
}

int main(){
    string s,t;
    while(cin>>s>>t){
        cout<<calc(s,t)<<endl;
    }
    return 0;
}
