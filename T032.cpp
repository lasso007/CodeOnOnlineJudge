#include<iostream>
using namespace std;
int main(){
    int A[3][4];
    int (*p)[4] = new int[3][4];
    //bool (*flag)[4] = new bool[5][4];
    bool flag[5][4] ={false};
    int sum=0;
    for(int i=0;i<5;++i)
        for(int j=0;j<4;++j)
            if(flag[i][j])
               cout<<"OK"<<endl;
    return 0;
}
