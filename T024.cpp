#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<vector<int> > r;
        int m=1,n;
        while(m<sum){
            int c = m*m-m+2*sum;
            vector<int> A;
            A.push_back(m);
            n = m+1;
            while(n*(n-1)<c){
                A.push_back(n);
                ++n;                
            }
            if(n*(n-1)==c){
                r.push_back(A);
                //m = n;
            }
            ++m;
        }
        return r;
    }
};
int main()
{
    int s;
    Solution so;
    while(cin>>s){
        vector<vector<int> > r = so.FindContinuousSequence(s);
        for(int i=0;i<r.size();++i){
            vector<int> ri = r[i];
            for(vector<int>::iterator it=ri.begin();it!=ri.end();++it)
                cout<<*it<<"\t";
            cout<<endl;
        }
    }
    return 0;
}
