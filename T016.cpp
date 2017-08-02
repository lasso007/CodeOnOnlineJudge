#include<iostream>
using namespace std;
int main()
{
	int s;
	while(cin>>s){
		int count = 0;
		unsigned int temp = s;
		cout<<"temp: "<<abs(temp)<<endl;
		while(temp>0){
			++count;
			temp = temp&(temp-1);
		}
		cout<<"count:"<<count<<endl;
	}
	return 0;
}
