#include<iostream>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        int len = s.size();
        int *flag = new int[len*len]();
        int m,n;
        for(int i=0;i<len;++i)
            for(int j=0;j<len-i;++j)
            {
                m = j;
                n = j+i;
                if(m==n)
                    flag[m*len+j] = 0;
                else if(m==n-1){
                    flag[m*len+n] = 0;
                    if(s[m]!=s[n])
                        flag[m*len+n] += 1;                    
                }else{
                     if(s[m]==s[n])
                         flag[m*len+n] = flag[(m+1)*len+n-1];
                     else{
                         int l = flag[(m+1)*len+n]+1;
                         int r = flag[m*len+n-1]+1;
                         flag[m*len+n] = l<r ? l:r;
                     }
                }
                //cout<<"(m,n):"<<m<<","<<n<<"\tflag[m,n]:"<<flag[m*len+n]<<endl;
            }
        cout<<flag[len-1]<<endl;
    }
    return 0;
}
