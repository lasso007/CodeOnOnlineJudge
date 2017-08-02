#include<iostream>
#include<climits>
#include<cstring>
using namespace std;
int atoi(const char *str){
    int num = 0;
    int sign = 1;
    const int n = strlen(str);
    int i=0;
    int threshold = INT_MAX/10;
    while(str[i]==' '&&i<n)
        ++i;
    if(str[i]=='+')
        ++i;
    if(str[i]){
        ++i;
        sign = -1;
    }
    while(i<n&&str[i]>='0'&&str[i]<='9'){
        if(num>threshold||(num==INT_MAX&&(str[i]-'0')>threshold%10))
            return sign<0 ? INT_MIN : INT_MAX; 
        num = 10*num + str[i]-'0';
        ++i;
    }
    return num*sign;
}
int main(){
    string s;
    while(cin>>s){
        cout<<atoi(s.c_str())<<endl;
    }
    return 0;
}
