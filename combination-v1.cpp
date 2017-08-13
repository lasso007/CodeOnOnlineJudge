#include<iostream>
#include<vector>
using namespace std;
void combination(const string &s, int step, string cur){
    if(step>=s.size()){
        if(cur.size()>0)
            cout<<cur<<endl;
        return;
    }
    combination(s, step+1, cur);
    cur.push_back(s[step]);
    combination(s, step+1, cur);
}
int main(){
    string s;
    string cur;
    while(cin>>s){
        combination(s, 0 , cur);
    }
    return 0;
}
