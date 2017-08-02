#include<iostream>
using namespace std;
class Solution {
public:
    int StrToInt(string str) {
        int pos = 0, neg = 0;
        int i=0;
        while(str[i]==' ')
            ++i;
        while(str[i]<'0'||str[i]>'9')
        {
            
        }
        
    }
};
int main()
{
    string s;
    Solution so;
    while(cin>>s){
        cout<<"result:"<<so.StrToInt(s)<<endl;
    }
    return 0;
}
