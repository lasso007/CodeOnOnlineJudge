#include<iostream>
#include<vector>
using namespace std;
void mergeTwo(vector<int> &A, int low, int mid, int high){
    vector<int> tmp;
    int i = low, j = mid;
    while(i<mid && j<high){
        if(A[i]<A[j])
            tmp.push_back(A[i++]);
        else
            tmp.push_back(A[j++]);
    }
    while(i<mid)
        tmp.push_back(A[i++]);
    while(j<high)
        tmp.push_back(A[j++]);
    for(int i=0;i<tmp.size();++i)
        A[low+i] = tmp[i];
}
void mSort(vector<int> &A, int low, int high){
    if(low<high){
        int mid = low + (high - low)/2;
        mSort(A, low, mid);
        mSort(A, mid+1, high);
        mergeTwo(A, low, mid+1, high+1);
    }
}
int main(){
    int n;
    while(cin>>n){
        vector<int> A(n, 0);
        for(int i=0;i<n;++i)
            cin>>A[i];
        //cout<<"Before: ";
        //for(int i=0;i<n;++i)
        //    cout<<A[i]<<"\t";
        //cout<<endl;
        mSort(A, 0, A.size()-1);
        for(int i=0;i<n;++i)
            cout<<A[i]<<"\t";
        cout<<endl;
    }
    return 0;
}
