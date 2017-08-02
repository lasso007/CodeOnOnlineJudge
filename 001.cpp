#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int T,n,k;
    cin>>T;
    while(T-->0){
        cin>>n>>k;
        int num = 2*n;
        vector<int> s(num);
        //cout<<"n:"<<n<<"\tsize: "<<s.size()<<endl;
        for(int i=0;i<num;++i){
            cin>>s[i];
        }
        while(k-->0){
			vector<int> tmp(s.begin(),s.end());
			int j=0;
			while(j<n){
				s[2*j] = tmp[j];
				s[2*j+1] = tmp[j+n];
				++j;
			}
        }

        for(int i=0;i<num-1;++i){
            cout<<s[i]<<" ";
        }
        cout<<s[num-1]<<endl;
    }
    return 0;
}
