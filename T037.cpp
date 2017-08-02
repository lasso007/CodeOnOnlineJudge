#include<iostream>
#include<algorithm>
using namespace std;
void method01(const string &s){
    for(int i=0;i<s.size();++i){
       if(s[i]>='a'&&s[i]<='z')
          cout<<s[i];
    }
    for(int i=0;i<s.size();++i){
       if(s[i]>='A'&&s[i]<='Z')
          cout<<s[i];
    }
    cout<<endl;
}
bool isLower(const char c1, const char c2){
    return c1-c2<0;
}
void method02(string &s)
{
    //stable_sort(s.begin(), s.end(), isLower);
    sort(s.begin(), s.end(), isLower);
    cout<<s<<endl;    
};
int main(){
    string s;
    while(getline(cin,s)){
        //method01(s);
        method02(s);
    }
    return 0;
}
