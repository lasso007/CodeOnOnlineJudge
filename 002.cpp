#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int num;
    while(cin>>num){
        vector<int> s;
        int tmp;
        while(num-->0){
            cin>>tmp;
            s.push_back(tmp);
        }
        sort(s.begin(),s.end());
        cout<<"------"<<endl;
        cout<<s[0]<<endl;
        for(int i=1;i<s.size();++i){
            if(s[i]!=s[i-1])
                cout<<s[i]<<endl;
        }
    }
    return 0;
}
