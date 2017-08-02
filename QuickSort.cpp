#include<iostream>
#include<vector>
using namespace std;
void QuickSort(vector<int> &A, int low, int high){
    if(low<high){
        int left = low;
        int right = high;
        int key = A[left];
        while(left<right){
            while(left<right&&A[right]>=key)
               --right;
            A[left] = A[right];
            while(left<right&&A[left]<=key)
               ++left;
            A[right] = A[left];
        }
        //cout<<"left:"<<left<<endl;
        A[left] = key;
        QuickSort(A, low, left-1);
        QuickSort(A, left+1, high);
    }

}
int main(){
    int n;
    while(cin>>n){
        vector<int> A(n,0);
        for(int i=0;i<n;++i)
            cin>>A[i];
        QuickSort(A,0,A.size()-1);
        for(int i=0;i<n;++i)
            cout<<A[i]<<"\t";
        cout<<endl;
    }    
    return 0;
}
