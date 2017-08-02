#include<iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
void test(int (*f)(int, int), int a, int b){
    cout<<f(a,b)<<endl;
    cout<<"Address of f: "<<&f<<endl;
    /*
    cout<<"sizeof(f):"<<sizeof(f)
        <<"\tsizeof(int * ):"<<sizeof(int *)
        <<"\tsizeof(int):"<<sizeof(int)<<endl;
   */
    
}
int main(){
    int A = 2;
    int B = 3;
    test(add, A,B);
    cout<<"function add address [(void *)&add] :"<<(void *)&add<<endl;
    cout<<"function test address [&test]:"<<&test<<endl;
    cout<<"function test address [test]:"<<test<<endl;
    //cout<<"sizeof(func):"<<sizeof(add)<<"\tsizeof(int *):"<<sizeof(int *)<<endl;
    cout<<"[sizeof(&add)]:"<<sizeof(&add)<<endl;
    cout<<"[sizeof(add)]:"<<sizeof(add)<<endl;
    return 0;
}
