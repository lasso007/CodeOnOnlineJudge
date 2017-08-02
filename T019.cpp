#include<iostream>
#include<sstream>
using namespace std;
int main()
{   

	int n=239;
	stringstream st;
	st<<n;
	string s;
    st>>s;
	cout<<s<<endl;
	st.clear();
    st<<19.032f;
	st>>s;
	cout<<"s:"<<s<<endl;
    /*
    int* a = new int[10]();
    cout<<"size:"<<sizeof(a)/sizeof(int)<<endl;
    cout<<":"<<sizeof(a)<<"\t"<<sizeof(int)<<endl;

    int num[] = {332,41,322,32,414,4};  
    int len = sizeof(num)/sizeof(int);  
    cout<<"len = "<<len<<endl; //cout<<(a>0)<<endl;
	*/
    return 0;
}
