#include<iostream>
#include<vector>
using namespace std;
void HeadFixDown(vector<int> &A, int i){
    int temp = A[i];
    int j = 2*i+1;
    int n = A.size();
    //cout<<"i:"<<i<<endl;
    while(j<n){
        if(j+1<n && A[j+1]<A[j])
           ++j;
        //cout<<"A[j]:"<<A[j]<<"\ttemp:"<<temp<<endl;
        if(A[j]>=temp)
           break;
        A[i] = A[j];
        i = j;
        j = 2*i+1;
    }
    A[i] = temp;
}

void print_vector(const vector<int> &A){
    for(int i=0;i<A.size();++i)
        cout<<A[i]<<"\t";
    cout<<endl;
}
void InitHeap(vector<int> &A){
    for(int i=A.size()/2-1; i>=0; --i)
        HeadFixDown(A, i);
}
int main(){
    int n;
    while(cin>>n){
        vector<int> A(n,0);
        for(int i=0;i<A.size();++i)
            cin>>A[i];
        InitHeap(A);
        print_vector(A);
    }
    return 0;
}
