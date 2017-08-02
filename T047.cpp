/*
 * 大写字母排在前面，小写字母排在后面，稳定排序
*/
#include<iostream>
using namespace std;
int main(){
    string s;
    while(cin>>s){
        int i=0;
        int j=i+1;
        int n = s.size();
        while(j<n){
            while(i<n&&s[i]<='Z')
                ++i;
            j = i+1;
            while(j<n&&s[j]>='a')
                ++j;
            //cout<<"i:"<<i<<"\tj:"<<j<<endl;
            if(j>=n)
                break;
            char tmp = s[j];
            for(int k=j-1;k>=i;--k)
                s[k+1] = s[k];
            s[i] = tmp;                
        }
        cout<<s<<endl;
    }
    return 0;
}
