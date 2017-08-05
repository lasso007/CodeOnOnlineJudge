#include<iostream>                                                                                            
#include<vector>                                                                                              
#include<string>                                                                                              
using namespace std;                                                                                          
int LCS(string s, string t){   //longest commmon substring                                                    
    int M = s.size()+1;                                                                                       
    int N = t.size()+1;                                                                                       
    vector<vector<int> > flag(M,vector<int>(N,0));                                                            
    for(int i=1;i<M;++i){                                                                                     
        for(int j=1;j<N;++j){                                                                                 
            if(s[i-1]==t[j-1])                                                                                
                flag[i][j] = flag[i-1][j-1]+1;                                                                
            else                                                                                              
                flag[i][j] = max(flag[i-1][j],flag[i][j-1]);                                                  
        }                                                                                                     
    }                                                                                                         
    cout<<s<<"\t\t\t\t\t"<<t<<": "<<flag[M-1][N-1]<<endl;                                                             
    return flag[M-1][N-1];                                                                                    
                                                                                                              
}
bool check_char(string s){
    int *num = new int[4]();
    bool flag = false;
    for(int i=0;i<s.size();++i){
        if(s[i]>='a'&&s[i]<='z')
            num[0] = 1;
        else if(s[i]>='A'&&s[i]<='Z')
            num[1] = 1;
        else if(s[i]>='0'&&s[i]<='9')
            num[2] = 1;
        else
            num[3] = 1;         
    }
    //cout<<num[0]<<"\t"<<num[1]<<"\t"<<num[2]<<"\t"<<num[3]<<endl;
	int tmp=num[0]+num[1]+num[2]+num[3];
    if(tmp>=3)
        flag = true;
    return flag;
}
bool check_substr(string s){
	int maxLen = 0;
	for(int i=0;i<s.size()-1;++i){                                                                             
		string s1 = string(s,0,i+1);                                                                      
		string s2 = string(s,i+1);                                                                        
		maxLen = max(maxLen,LCS(s1,s2));
	}
	cout<<"maxlen: "<<maxLen<<endl;
	if(maxLen>2)
		return false;
	else
		return true;
}
int main(){                                                                                                   
    string s;                                                                                                 
    while(getline(cin,s)){                                                                      int len = s.size();
        if(len>8&&check_char(s)&&check_substr(s))
			cout<<"OK"<<endl;	
		else
			cout<<"NG"<<endl;
    }
    return 0;                                                                                                 
}                                                                                                         
                                                                                                              

