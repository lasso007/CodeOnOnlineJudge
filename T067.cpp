#include<iostream>
using namespace std;
int main(){
    string s;
    while(cin>>s){
        int Num = 0;
        int flag[256] = {0};
        for(int i=0;i<s.size();++i)
            ++flag[s[i]];
        for(int i=0;i<256;++i){
            if(flag[i]>0&&(flag[i]&0x01>0))
                ++Num;
        }
        if(s.size()>0&&Num<1)
            ++Num;
	cout<<Num<<endl;
    }
    return 0;
}
