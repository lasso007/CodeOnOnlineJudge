#include<iostream>
#include<algorithm>
using namespace std;

template <typename DataType>
DataType self_add(DataType x, DataType y){
    return x+y;
}
bool isLower(char c){
    return c>='a';
}
int main()
{
    string s;
    while(cin>>s){
        stable_partition(s.begin(),s.end(),isLower);
        cout<<"result:"<<s<<endl;
    }
    /*
    int a1 = 2, b1 = 4;
    cout<<self_add(a1,b1)<<endl;
    float a2 = 2.3f, b2 = 4.5f;
    cout<<self_add(a2,b2)<<endl;
    string a3 = "hello", b3 = " world";
    cout<<self_add(a3,b3)<<endl;
    */
   /*
	//float n=0.0f;
	//float m=2.3f;
    string m = "abc";
    string n = "123";
	cout<<"m: "<<m<<"\tn: "<<n<<endl;
    swap(m,n);
	cout<<"m: "<<m<<"\tn: "<<n<<endl;
	*/
	return 0;
}
