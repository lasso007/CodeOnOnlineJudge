/*
  给定一个有n个正整数的数组A和一个整数sum,求选择数组A中部分数字和为sum的方案数。
当两种选取方案有一个数字的下标不一样,我们就认为是不同的组成方案。
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, sum;
    int dp[1000] = {0};
    dp[0] = 1;
    while(cin>>n>>sum){
        vector<int> values(n,0);
        for(int i=0; i<n; ++i)
            cin>>values[i];
        for(int i=1; i<=n; ++i){
            for(int j=sum; j>=0;--j){
                if(j>=values[i-1])
                    dp[j] += dp[j-values[i-1]];
            }
        }
        cout<<"result:"<<dp[sum]<<endl;
    }
    return 0;
}
/*
int const maxn = 1100;
int data[maxn];
long long f[maxn];
int main() {
    int n,sum;
    cin>>n>>sum;
    for (int i=1;i<=n;i++) {
        cin>>data[i];   
    }
    f[0] = 1;
    for (int i=1;i<=n;i++) {
        for (int j=maxn;j>=0;j--) {
            if(j>=data[i]) {
                f[j] += f[j-data[i]];
            } 
        }
    }
    cout<<f[sum]<<endl;
}
*/
