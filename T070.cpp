#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int LargestRect(const vector<int> &height){
    stack<int> s;
    int i=0;
    int n = height.size();
    int wide, high;
    int ret = 0;
    while(i<n||!s.empty()){
        if(s.empty()||height[s.top()]<=height[i]){
            s.push(i++);
        }else{
            high = height[s.top()];
            s.pop();
            wide = s.empty()? i: i-1-s.top();
            high = high*wide;
            if(high>ret)
                ret = high;
        }
    }
    return ret;

}
int main(){
    int n;
    while(cin>>n){
        vector<int> s(n,0);
        for(int i=0;i<n;++i)
            cin>>s[i];
        cout<<LargestRect(s)<<endl;
    }
    return 0;
}
