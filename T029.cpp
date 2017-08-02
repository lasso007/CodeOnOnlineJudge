#include<iostream>
#include<cstring>
using namespace std;
bool getNum(int &num,char *s,int a, int b){
     if(a>b)
         return true;
         
     }
}
int main()
{
    char s[1024];
    string t;
    while(getline(cin,t)){
         t.copy(s,t.length(),0);
         int mid = 0;
         while(mid<strlen(s)&&(s[mid]!='e'||s[mid]!='E'))
             ++mid;
         int a=0;
         getNum(a,s,0,mid-1);
         int b=0;
         getNum(b,s,mid+1,strlen(s)-1);
    }
    return 0;
}
