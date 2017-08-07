#include<iostream>
using namespace std;
bool find(int (*matrix)[4], int rows, int columns, int num){
    if(matrix&&rows>0&&columns>0){
        int i=0, j=columns-1;
        while(i<rows&&j>=0){
            if(matrix[i][j]==num)
                return true;
            else if(matrix[i][j]>num)
                --j;
            else
                ++i;
        }
    }
    return false;
}
int main(){
    int matrix[4][4]={1,2,8,9, 2,4,9,12, 4,7,10,13, 6,8,11,15};
    //if(find(matrix, 4, 4, 5))
    if(find(matrix, 4, 4, 7))
        cout<<"Find it"<<endl;
    else
        cout<<"Can not Find it"<<endl;
    return 0;
}
