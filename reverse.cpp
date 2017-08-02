#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    vector<int> s;
    if(s.empty())   cout<<"empty..."<<endl;
    while(cin>>n){
        vector<int> s(n);
        for(int i=0;i<n;++i)
            cin>>s[i];
        reverse(s.begin(),s.end());
        for(int i=0;i<n;++i)
            cout<<s[i]<<"\t";
        cout<<endl;
    }
    return 0;
}
