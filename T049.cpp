#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string s;
    stringstream ss;
    int n, i, sum, a;
    cin >> n;
    getline(cin, s); // 读取n行，每行数据个数不定
    for(i=0; i<n; i++)
    {
        getline(cin, s);
        for(int k=0;k<s.size();++k)
            if(s[k]==',')
                s[k] = ' ';
        ss.clear();
        ss.str(s);
        sum=0;
        while(true)
        {
            ss >> a;
            if(ss.fail()) 
                break;
            sum+=a;
            cout<<"\tnum:"<<a<<endl;
        }
        cout<<"sum:"<<sum<<endl;
    }   
    return 0;
}
