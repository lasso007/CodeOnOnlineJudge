#include<iostream>
#include<string>
using namespace std;
void reverse_string(string& s,int begin){
    if(begin>s.size())
		return;
    int end = 1;
    while((begin+end<s.size())&&s[begin+end]!=' ')
        ++end;
    string t(s,begin,end);
    reverse_string(s,begin+end+1);
    cout<<t<<" ";

    
            

}
int main(){
    string s;
    while(getline(cin, s)){
        reverse_string(s,0);
		cout<<endl;
    }
    
    return 0;
}
