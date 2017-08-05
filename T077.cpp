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
    while(cin>>n>>sum){
        vector<int> values(n,0);
        for(int i=0; i<n; ++i)
            cin>>values[i];
        for(int )
    }
    return 0;
}
