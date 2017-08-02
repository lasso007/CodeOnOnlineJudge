#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int num;
    while(cin>>num){
        vector<int> res;
        int i=2;
        int tmp;
        while(num!=1){
            if(num%i==0)
            {
                while(num%i==0){
                    res.push_back(i);
                    num = num/i;
                }
            }else{
                ++i;
            }
        }
        for(vector<int>::iterator it=res.begin();it!=res.end();++it)
            cout<<*it<<"\t";
        cout<<endl;
    }
    return 0;
}
