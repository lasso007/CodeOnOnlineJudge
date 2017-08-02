#include<iostream>
using namespace std;
bool isChar(char c){
    bool flag = false;
    if(c=='A'||c=='D'||c=='W'||c=='S')
        flag = true;
    return flag;
}
bool isNum(char c){
    bool flag = false;
    if(c>='0'&&c<='9')
        flag = true;
    return flag;
}
int main(){
    string s;
    while(getline(cin,s)){
        int i=0;
        int j;
        int X=0;
        int Y=0;
        while(i<s.size()){
            
            j = i+1;
            while(j<s.size()&&s[j]!=';')
                ++j;
            int len = j-i;
            int step=0;
            if((len==2)&&isChar(s[i])&&isNum(s[i+1]))
                step = s[i+1]-'0';
            
            if((len==3)&&isChar(s[i])&&isNum(s[i+1])&&isNum(s[i+2]))
				step = s[i+2]-'0'+10*(s[i+1]-'0');
			//cout<<j<<"\tstep:"<<step<<endl;            
            if(s[i]=='A')
               X-=step;
            else if(s[i]=='D')
               X+=step;
            else if(s[i]=='W')
               Y+=step;
            else
               Y-=step;
            i = j+1;
        
        }
        cout<<X<<","<<Y<<endl;   
               
    }
    return 0;
}
