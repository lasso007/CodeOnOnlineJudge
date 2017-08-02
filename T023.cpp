#include<iostream>
using namespace std;
class Solution {
public:
    bool check_factor(int n){
        int i=2;
        bool result = true;
        while(result&&n!=1){
            if(n%i==0){
                if(i!=2&&i!=3&&i!=5)
                    result = false;
                while(n%i==0)
                    n = n/i;                
            }else{
                ++i;
            }
                
        }
        return result;
    }
    int GetUglyNumber_Solution(int index) {
		if(index==1)
            return 1;
        else{
            int count = 1;
            int n = 2;
            while(count<=index){
                ++n;
                if(check_factor(n))
				{
                    cout<<"n:"<<n<<endl;
                    ++count;
				}
                
            }
            return n;
        }
    }
};
int main()
{
    int m;
    Solution s;
    while(cin>>m)
    {
        /*
        if(s.check_factor(m))
             cout<<"yes"<<endl;
        else
             cout<<"No"<<endl;
        */
        cout<<"result:"<<s.GetUglyNumber_Solution(m)<<endl;
    }
    return 0;
}
