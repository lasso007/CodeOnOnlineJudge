#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<int> primeSet;
    primeSet.push_back(2);
    for(int k=3; k<1000;++k){
        bool isPrime = true;
        for(int i=0;i<primeSet.size()&&isPrime;++i){
            if(k%primeSet[i]==0)
                isPrime = false;

        }
        if(isPrime)
            primeSet.push_back(k);
    }

    while(cin>>n){
        int num = 0;
        int low=0, high = primeSet.size()-1;
        while(low<=high){
            if(primeSet[low]+primeSet[high]>n)
                --high;
            else if(primeSet[low]+primeSet[high]<n)
                ++low;
            else{
                --high;
                ++low;
                ++num;
            }
        }
        cout<<num<<endl;
    }
    return 0;
}
