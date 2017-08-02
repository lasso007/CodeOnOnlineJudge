#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    
    char *num = new char(10);
    for(int i=0;i<10;++i)
         cout<<num[i]<<endl;
    cout<<"______________"<<endl;
    memset(num,'o',sizeof(char)*10);
    for(int i=0;i<10;++i)
         cout<<num[i]<<endl;
    return 0;
}
