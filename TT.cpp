#include<iostream>
#include<stdio.h>
#include<list>
#include<iomanip>
using namespace std;

/*
void test(const int m, const int n){
    int (*A)[n] = new int[m][n];
}
*/
struct TreeNode{
    int val0,val1;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int a, int b):val0(a), val1(b), left(NULL), right(NULL){};
};
int main(){
    
    printf("%.4f\n",2.3);
    cout<<setiosflags(ios::fixed)<<setprecision(3)<<2.3<<endl;
    list<int> A{1,2,3};
    A.push_back(10);
    A.push_back(2);
    A.push_back(0);
    A.push_back(8);
    for(list<int>::iterator it = A.begin();it!=A.end();++it)
        cout<<*it<<endl;
    list<int>::iterator it0  = A.begin();
    /*
    int m,n;
    while(cin>>m>>n){
        //int (*A)[n] = new int[m][n];
        test(m,n);
    }
    */
    return 0;
}
