#include<iostream>
#include<sstream>
using namespace std;
int main(){
    stringstream ss;
    string s = "12FF30DD";
    string s1(s.begin(),s.end()), s2(s.begin(),s.end());
    for(int i=0;i<s.size();++i){
        if(s[i]>='0'&&s[i]<='9'){
            s2[i] = ' ';
        }else
            s1[i] = ' ';        
    }
    int m,n;
    string str1,str2;
    ss.clear();
    ss.str(s1);
    ss>>m>>n;
    ss.clear();
    ss.str(s2);
    ss>>str1>>str2;
    cout<<"m:"<<m<<"\tn:"<<n<<endl;
    cout<<"str1:"<<str1<<"\tstr2:"<<str2<<endl;
    /*
    ostringstream oss;
    oss.put('a');
    oss.put('b');
    oss<<"xyz";
    string tmp = "mnp";
    oss<<tmp;
    string s = oss.str();
    cout<<"s:"<<s<<endl;
    */
    return 0;
}
