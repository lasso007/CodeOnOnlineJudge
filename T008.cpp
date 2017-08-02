#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int num;
    while(cin>>num){
        vector<char> s;
        int a = num%10;
        char tmp = '0'+a;
        s.push_back(tmp);
        num = num/10;
        while(num%10>0){
            a = num%10;
            num = num/10;
            if(tmp!=s[s.size()-1])
                s.push_back(tmp);
        }
        for(int i=0;i<s.size();++i)
            if(s[i]!='0')
				cout<<s[i];
        cout<<endl;
    }
    return 0;
}
