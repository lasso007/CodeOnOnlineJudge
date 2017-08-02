#include<iostream>
#include<stack>
#include<vector>
/*
 * Largest Rectangle in Histogram
*/
using namespace std;
int calc(vector<int> &A){
    stack<int> s;
    if(A.size()<0)
        return 0;
    int result = A[0];
    int i=0;
    int tmp;
    A.push_back(0);
    while(i<A.size()){
        if(s.empty()||A[i]>A[s.top()])  
            s.push(i++);
        else{
            tmp = s.top();
            s.pop();
            result = max(result, A[tmp]*(s.empty()? i:i-tmp));
        }
    }
    return result;
}
int main(){
    int n;
    /*
    int a[] = {1,2,3,4,5};
    swap(a[0], a[2]);
    for(int i=0;i<5;++i)
        cout<<a[i]<<"\t";
    cout<<endl;
    */
    while(cin>>n){
        vector<int> A(n);
        for(int i=0;i<n;++i)
            cin>>A[i];
        cout<<calc(A)<<endl;

    }
    return 0;
}
