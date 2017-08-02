#include<iostream>
#include<vector>
using namespace std;
void split_string(string &str, vector<string> &s){
	int i=0;
	int j;
	while(i<str.size()){
		j = 1;
		while((i+j)<str.size()&&str[i+j]!='.')
			++j;
		s.push_back(string(str,i,j));
		i += j+1;
	}
}
/*
bool check_ip(string &str){
    vector<string> t = split_num(str);
	bool flag = false;
	if(t.size()==4){
		
	}
	
}
*/

int main(){
    
    string s;
    int *A = new int();
    while(cin>>s){
        int i = 0;
        while(i<s.size()&&s[i]!='~')
			++i;
        string ip = string(s,0,i);
        string mask = string(s,i+1);
        vector<string> ip_string;
		split_string(ip, ip_string);
        vector<string> mask_string;
		split_string(mask, mask_string);
		
		
		/*
		for(int i=0;i<ip_string.size();++i)
			cout<<ip_string[i]<<endl;
		for(int i=0;i<mask_string.size();++i)
			cout<<mask_string[i]<<endl;
		*/
        
    }
    return 0;
}
