#include<iostream>
#include<vector>
using namespace std;
string simplifyPath(const string &path){
    int i=1,j=1;
    vector<string> dirs;
    string res;
    while(i<path.size()){
        while(j<path.size()&&path[j]!='/')    ++j;
        string temp = string(path.begin()+i,path.begin()+j);
        if(!temp.empty()&&temp!="."){
            if(temp=="..")
                dirs.pop_back();
            else
                dirs.push_back(temp);
        }
        ++j;
        i=j;
    }
    if(dirs.empty())
        res = "/";
    else{
        for(vector<string>::iterator it=dirs.begin();it!=dirs.end();++it){
            res += "/" + *it;
        }
    }
    return res;
}
int main(){
    string s;
    while(cin>>s){
        cout<<simplifyPath(s)<<endl; 
    }

}
