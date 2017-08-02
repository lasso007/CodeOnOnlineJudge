#include<iostream>
using namespace std;
void next_perm(string s, int i){
    if(i==s.size())
        cout<<s<<endl;
    else{
        for(int j=i;j<s.size();++j){
            swap(s[i],s[j]);
            //cout<<s<<endl;
            next_perm(s,j+1);
            swap(s[i],s[j]);
        }
    }
}
int main(){
    string s;
    while(cin>>s){
        int n = s.size();
        //string t(s.begin(),s.end());
        cout<<"result:"<<endl;
        next_perm(s,0);
    }
    return 0;
}
