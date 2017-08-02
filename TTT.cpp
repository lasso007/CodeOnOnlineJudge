#include<iostream>
#include<iomanip>
#include<sstream>
/*
class Test{
    int a;
    static double c;
};
class Test1{};
*/
using namespace std;
int main(){

    stringstream ss;
    string s;
    
    //cout<<to_string(2.3)<<endl;
    int a;
    while(getline(cin,s)){
        for(int i=0;i<s.size();++i)
            if(s[i]==',')    s[i]=' ';
        ss.clear();
        ss.str(s);
        while(true){
            ss>>a;
            if(ss.fail())
                break;
            cout<<"num:"<<a<<endl;
        }
    }
    /*
    Test *t;

    cout<<"sizeof(Test):"<<sizeof(Test)
        <<"\tsizeof(Test *t):"<<sizeof(t)
        <<"\tsizeof(Test1):"<<sizeof(Test1)<<endl;
    */
    //char p[] = "abcdef";
    //p[0] = 'x';
    /*
    char *p = new char[20];
    delete[] p;
    cout<<sizeof(string)<<endl;
    string s;
    string t = "abcdefghi";
    cout<<"sizeof(s):"<<sizeof(s)<<"\tsizeof(t):"<<sizeof(t)<<endl;
    */
    return 0;
}
