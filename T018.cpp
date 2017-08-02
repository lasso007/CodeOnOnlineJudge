#include<iostream>
using namespace std;
int calc(int n)
{
    return 0;
}
int main()
{
    int n;
    while(cin>>n){
		int a,b;
		int result = 0;
        for(int i=1;i<=n;i*=10){
			a = n/i;
			b = n%i;
			result += (a+8)/10*i+(a%10==1)*(b+1);
        }
        cout<<"result:"<<result<<endl;
	}
    return 0;
}
