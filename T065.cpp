/*
 * 给出两个字符串（可能包含空格）,找出其中最长的公共连续子串,输出其长度
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s,t;
    while(getline(cin,s)&&getline(cin,t)){
        int maxCommon = 0;
        int lenA = s.size();
        int lenB = t.size();
        vector<vector<int> > flag(lenA+1, vector<int>(lenB+1,0));
        for(int i=0;i<lenA;++i)
            for(int j=0;j<lenB;++j){
                if(s[i]==t[j])
                    flag[i+1][j+1] = flag[i][j]+1;
                else
                    flag[i+1][j+1] = 0;
                if(flag[i+1][j+1]>maxCommon)
                    maxCommon = flag[i+1][j+1];
            }
        cout<<maxCommon<<endl;
    }
    return 0;
}
