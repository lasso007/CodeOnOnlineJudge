#include<iostream>
#include<vector>
using namespace std;
bool check_vector(const vector<int> &s){
    int A,B;
    for(size_t i=1;i<s.size();++i){
        A = s[i-1];
        B = s[i];
        if(!(A<=B||(A%B!=0)))
            return false;
    }
    return true;
}
void perm(vector<int> s, int n, int k, long long &count){
    if(s.size()>=n){
        if(check_vector(s))
            ++count;
        return;
    }
    int A;
    for(int B=1; B<=k; ++B){
        if(s.size()<1){
           A = B;
        }else
            A = s[s.size()-1]; 

        if(A<=B||(A%B!=0)){
            vector<int> t(s.begin(), s.end());
            t.push_back(B);
            perm(t, n, k, count);
        }
        
    }
}
int main(){
    int n,k;
    while(cin>>n>>k){
        vector<int> s;
        s.clear();
        long long count = 0;
        perm(s, n, k, count);
        cout<<count%1000000007<<endl;
    }
    return 0;
}




