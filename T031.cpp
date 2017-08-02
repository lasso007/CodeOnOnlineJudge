#include<iostream>
#include<vector>
using namespace std;
void print_list(vector<int> &A){
    cout<<"list: ";
    for(vector<int>::iterator it=A.begin();it!=A.end();++it)
        cout<<*it<<"\t";
    cout<<endl;
}
int main(){
    int n;
    while(cin>>n){
        vector<int> s(n,0);
        for(int i=0;i<n;++i)
            cin>>s[i];
        print_list(s);
        if(n<2)
            break;
        int res = s[1]-s[0];
        int tmp = 0;
        for(int i=1;i<n;++i){        
            if(tmp>=0){
                tmp += s[i]-s[i-1];
            }else{
                tmp = s[i]-s[i-1];
            }
            if(tmp>res)
                res = tmp;
        }
        cout<<"result:"<<res<<endl;
    }
    return 0;
}
