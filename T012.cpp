#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N,m;
    while(cin>>N>>m){
        vector<int> v(m+1,0); //price
        vector<int> q(m+1,0); //主件，附件
        vector<int> vp(m+1,0); // price*importance
        vector<vector<int> > dp(m+1,vector<int>(N+1,0));
        int tmp;
        for(int i=1;i<=m;++i){
            cin>>v[i]>>tmp>>q[i];
            vp[i]=tmp*v[i];
        }
        for(int i=1;i<=m;++i){
            for(int j=1;j<=N;++j){
                if(q[i]==0){
                    if(v[i]<=j){
						dp[i][j] = max(dp[i-1][j-v[i]]+vp[i],dp[i-1][j]);                        
                    }
                    else
                        dp[i][j] = dp[i-1][j];
                }
                else{
                    if(v[i]+v[q[i]]<=j)
                        dp[i][j] = max(dp[i-1][j-v[i]-v[q[i]]],dp[i-1][j]);
                    else
                        dp[i][j] = dp[i-1][j];
                }
            }
        }
        cout<<dp[m][N]<<endl;
    }
    return 0;
}
