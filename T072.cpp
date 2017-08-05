/*
  一个数组有 N 个元素，求连续子数组的最大和。 例如：[-1,2,1]，和最大的连续子数组为[2,1]，其和为 3 
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N;
    while(cin>>N){
        vector<int> s(N,0);
        int maxNum;
        for(size_t i=0;i<s.size();++i)
            cin>>s[i];
        maxNum = s[0];
        int tmpSum = maxNum;
        for(size_t i=1;i<s.size();++i){
            if(tmpSum>=0)
                tmpSum += s[i];
            else
                tmpSum = s[i];
            if(maxNum<tmpSum)
                maxNum = tmpSum;
        }
        cout<<maxNum<<endl;
    }
    return 0;
}
