/*
 给定一个十进制数M，以及需要转换的进制数N。将十进制数M转化为N进制数 
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int M,N;
    char indexToNum[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
                           '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    while(cin>>M>>N){
        bool isNeg = false;
        if(M==0){
           cout<<0<<endl;
           continue;
        }
        vector<char> result;
        if(M<0){
            M *= -1;
            isNeg = true;
        }
        while(M>0){
            result.push_back(indexToNum[M%N]);
            M /= N;
        }

        if(isNeg)
            cout<<"-";
        for(vector<char>::reverse_iterator it = result.rbegin();it!=result.rend();++it)
            cout<<*it;
        cout<<endl;
        
    }
    return 0;
}
