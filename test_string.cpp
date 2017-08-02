#include<iostream>
#include<cstring>
using namespace std;
int main(){
     string s = "1234567";
     //char p[] = "1234";
     char *p = new char[3];
     strcpy(p, s.c_str());
     cout<<p<<endl;
     //cout<<s<<"\ts.size():"<<s.size()<<endl;
     //cout<<p<<"\tstrlen(p):"<<strlen(p)<<endl;
     //to_string(23);
     //string(itoa(234));
    /*
    string s;
    while(cin>>s){
        //s = "";
        int len = s.length();
        char *p = new char[len+1];
        s.copy(p, len, 0);
        cout<<"char string: "<<p<<endl;
    }
    */
    return 0;
}
