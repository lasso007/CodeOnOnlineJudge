#include<iostream>
using namespace std;
int main(){
    string s;
    while(cin>>s){
        int maxLen = 0;
        int t=0;
        for(int i=0;i<s.size();++i){
            if(s[i]=='A'||s[i]=='T'||s[i]=='C'||s[i]=='G'){
                ++t;
                if(t>maxLen)
                    maxLen = t;
            }else
                t = 0;
        }
	cout<<maxLen<<endl;
    }
    return 0;
}
