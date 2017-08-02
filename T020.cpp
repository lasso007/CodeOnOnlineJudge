#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool compare01(int a, int b){
	return a<b;
}
int main()
{
	vector<int> a;
	a.push_back(10);
	a.push_back(2);
	a.push_back(8);
	a.push_back(-1);
	a.push_back(6);
	sort(a.begin(),a.end(),compare01);
	for(vector<int>::iterator it=a.begin();it!=a.end();++it)
		cout<<*it<<endl;
	return 0;
}
