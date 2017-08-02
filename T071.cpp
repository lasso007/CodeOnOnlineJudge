#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    int m,n;
    int tmp;
    while(cin>>m>>n){
        set<int> s;
        vector<int> res;
        for(int i=0;i<m+n;++i){
            cin>>tmp;
            s.insert(tmp);
        }
        for(set<int>::iterator it=s.begin();it!=s.end();++it)
            res.push_back(*it);
        for(int i=0;i<res.size()-1;++i)
            cout<<res[i]<<" ";
        cout<<res[res.size()-1]<<endl;
 

    }
    return 0;
}
