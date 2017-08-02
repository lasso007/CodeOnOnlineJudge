#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int Partition(vector<int> &A, int begin, int end){
    int key = A[begin];
    int left = begin;
    int right = end;
    while(left<right){
        while(left<right&&A[right]>=key)
            --right;
        A[left] = A[right];
        while(left<right&&A[left]<=key)
            ++left;
        A[right] = A[left];
    }
    A[left] = key;
    return left;
}
void QuickSort(vector<int> &A, int begin, int end){
    if(begin>=end)
        return;
    int index = Partition(A, begin,end);
    QuickSort(A, begin, index-1);
    QuickSort(A, index+1, end);
}
int main(){
    vector<int> A = {10, 9, 10, 12, 1, 3, 9, 4, 5, 6};
    QuickSort(A,0,A.size()-1);
    for(int i=0;i<A.size();++i)
        cout<<A[i]<<"\t";
    cout<<endl;
    //cout<<Partition(A,0,A.size()-1)<<endl;

}
