#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        vector<int> x(n,0);
        vector<int> y(n,0);
        vector<int> result(n,0);
        for(int i=0;i<n;++i)
           cin>>x[i];
        for(int i=0;i<n;++i)
           cin>>y[i];
        for(int k=1;k<=n;++k){
            int t = k/2;
            for(int i=0;i<k;++i){
                result[k-1] = abs(x[i]-x[t])+abs(y[i]-y[t]);
            }
        }
        for(int i=0;i<result.size()-1;++i)
             cout<<result[i]<<" ";
        cout<<result[n-1]<<endl;
    }
    return 0;
}
