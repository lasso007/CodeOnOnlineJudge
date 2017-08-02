#include<iostream>
#include<string>
using namespace std;
/*
void reverse_string(string *s,int begin){
    int end = 1;
    do{
        if(s[begin+end]!=' ')
            ++end;
        else{
            string t(s,begin,end);
            reverse_string(s,begin+end+1);
            cout<<t<<" ";
        }
            
    }while(begin+end-1 == s->size())
}
*/
int main(){
    //char s[1000];
	string s;
    while(getline(cin,s))
		cout<<"s: "<<s<<endl;
/*    while(cin>>s){
        //reverse_string(s,0)
         string t(s,3,4);
		cout<<"t: "<<t<<"\ts: "<<s<<endl;
    }
*/  
    return 0;
}
