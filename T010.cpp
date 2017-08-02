#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
void QuickSort(vector<string> &A,int low, int high){
	int left = low;
	int right = high;
	if(low<high){
		string key = A[left];
		while(left<right){
			while(left<right&&A[right]>key)
				--right;
			A[left] = A[right];
			while(left<right&&A[left]<key)
				++left;
			A[right] = A[left];
		}
		A[left] = key;
		QuickSort(A,low,left-1);
		QuickSort(A,left+1,high);
	}

}
*/
int main(){
    
    int num = 0;
    while(cin>>num){
        vector<string> S;
		string tmp;
		while(num-->0){
			cin>>tmp;
			S.push_back(tmp);
		}
		sort(S.begin(),S.end());
		//QuickSort(S,0,S.size()-1);
		for(int i=0;i<S.size();++i)
			cout<<S[i]<<endl;
    }
    return 0;
}

