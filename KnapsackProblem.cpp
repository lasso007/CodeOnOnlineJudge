/*
 *  0-1 背包问题
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> weight = {2, 2, 6, 5, 4}; 
    vector<int> value = {6, 3, 5, 4, 6}; 
    int C = 10;
    int f[1000] = {0};
    int num = weight.size();
    for(int i=1; i<=num; ++i){
        for(int j=C;j>=0;--j){
            if(weight[i-1]<=j){
                f[j] = max(f[j], f[j-weight[i-1]]+value[i-1]);
            }
        }
    }
    cout<<f[C]<<endl;
    return 0;
}
