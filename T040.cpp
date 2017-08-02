#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s;
    while(cin>>s){
        vector<pair<int, int> > A(256, make_pair(0,-1));
        for(int i=0;i<s.size();++i){
            A[s[i]].first += 1;
            A[s[i]].second = i;
        }
        //for(int i=0;i<256;++i){
        //    cout<<A[i].first<<"\t"<<(char)i<<endl;
        //}
        pair<int, int> p(0,-1);        
        for(int i=0;i<256;++i){
            if(A[i].first==1){
                if(p.second<0)
                    p = A[i];
                if(A[i].second<p.second)
                    p = A[i];
                //cout<<"A[i].second:"<<A[i].second<<"\tp.second:"<<p.second<<"\tchar:"<<(char)i<<endl;
            }
        }
        //cout<<"resulr: p.second "<<p.second<<endl;
        cout<<s[p.second]<<endl;
    }
    return 0;
}
