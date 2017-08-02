#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool IsContinuous( vector<int> numbers ) {       
        int  Max = -1, Min = 15;
        int tmp;
        int flag=0;
        for(vector<int>::iterator it=numbers.begin();it<numbers.end();++it){
            tmp = *it;
            if(tmp!=0){
                if((flag>>tmp)&1)
                    return false;
                flag |= (1<<tmp);
                if(tmp<Min)
                    Min = tmp;
                if(tmp>Max)
                    Max = tmp;				
            }
        }
        cout<<"Max:"<<Max<<"\tMin:"<<Min<<endl;        
        return Max-Min<5;
    }
};
int main()
{
    vector<int> r;
    r.push_back(1);
    r.push_back(2);
    r.push_back(3);
    r.push_back(4);
    r.push_back(5);
    Solution so;
    if(so.IsContinuous(r))
        cout<<"yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}
