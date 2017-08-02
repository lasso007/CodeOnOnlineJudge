#include<iostream>
#include<vector>
using namespace std;
int calc(const string &s){
    if(s.size()<1)
        return s.size();
    int len = s.size()+1;
    vector<vector<int> > A(len, vector<int>(len, 0));
    for(int i=1;i<len;++i)
        for(int j=1;j<len;++j){
            if(s[i-1]==s[len-j-1])
                A[i][j] = A[i-1][j-1]+1;
            else
                A[i][j] = A[i-1][j]>A[i][j-1] ? A[i-1][j]:A[i][j-1];
        }
    return A[len-1][len-1];
}
int main(){
   string s;
   while(cin>>s){
       cout<<calc(s)<<endl;

    }
    return 0;
}
