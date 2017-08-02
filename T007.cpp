#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int num;
    while(cin>>num){
        char *res = new char(10);
        memset(res,'0',sizeof(char)*10);
        int a;
        while(num%10>0){

            a = num%10;
            num = num/10;
            res[a] = '0'+a;
            cout<<a<<"\t";
        }
        for(int i=0;i<10;++i)
            cout<<res[i];
        cout<<endl;
    }
    return 0;
}
