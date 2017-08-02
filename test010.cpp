#include<iostream>
#include<vector>
using namespace std;
void QuickSort(vector<int> &A,int low, int high){
	cout<<"----------------"<<low<<"\t"<<high<<endl;
	int left = low;
	int right = high;
	if(low<high){
		int key = A[low];
		while(left<right){
			while(left<right&&A[right]>key)
				--right;
			cout<<"right:"<<right<<endl;
			A[left] = A[right];
			while(left<right&&A[left]<key)
				++left;
			cout<<"left:"<<left<<endl;
			A[right] = A[left];
		}
		A[left] = key;
		QuickSort(A,low,left-1);
		QuickSort(A,left+1,high);
	}

}
int main(){
    
    int num = 0;
    while(cin>>num){
        vector<int> S;
		int tmp;
		while(num-->0){
			cin>>tmp;
			S.push_back(tmp);
		}
		QuickSort(S,0,S.size()-1);
		for(int i=0;i<S.size();++i)
			cout<<S[i]<<endl;
    }
    return 0;
}

