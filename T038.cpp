#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int calc1(const vector<int> &A){
    int minGap = A[1] - A[0];
    int res = 0;
    for(int i=1;i<A.size();++i)
        if(A[i]-A[i-1]<minGap)
            minGap = A[i]-A[i-1];
    if(minGap==0){
        for(int i=1;i<A.size();++i){
            int j=i-1;
            while(j>=0&&A[j--]==A[i])
                ++res;
        }
    }else{
        for(int i=1;i<A.size();++i)
            if(A[i]-A[i-1]==minGap)
                ++res;
    }
    return res;
}
int calc2(const vector<int> &A){
    int m = 1, n = 1;
    for(int i=1;i<A.size();++i){
        if(A[i]!=A[i-1])
            break;
        ++m;
    }
    for(int i=A.size()-2;i>0;--i){
        if(A[i]!=A[i+1])
            break;
        ++n;
    }
    return m*n;
}

int main(){
    int N;
    while(cin>>N){
        vector<int> A(N,0);
        for(int i=0;i<N;++i)
            cin>>A[i];
        int num1=0, num2 = 0;
        if(N>1){
            sort(A.begin(),A.end());
            num1 = calc1(A);
            num2 = calc2(A);
        }
        cout<<num1<<" "<<num2<<endl;
    }
    return 0;    
}
