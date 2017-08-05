#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

class Solution{
public:
    bool hasPath(char *matrix, int rows, int cols, char *str){
        //bool used[rows*cols] = {false};
        bool *used = new bool[rows*cols]();
        if(str==NULL)    return true;
        for(int i =0;i<rows; ++i)
            for(int j=0;j<cols; ++j){
                if(hasPathRecu(matrix, rows, cols, i, j, str, 0, used))
                    return true;
            }        
        return false;
    }
private:
    bool hasPathRecu(char *matrix, int rows, int cols, int i, int j, char *str, int s, bool *used){
        if(*(str+s)=='\0')
            return true;
        if(i<0||i>=rows||j<0||j>=cols)
            return false;
        int index = cols*i + j;
        bool result = false;
        if(!used[index] && matrix[index]==str[s]){
            used[index] = true;
            result = hasPathRecu(matrix, rows, cols, i-1, j, str, s+1, used)
                     ||hasPathRecu(matrix, rows, cols, i+1, j, str, s+1, used)
                     ||hasPathRecu(matrix, rows, cols, i, j-1, str, s+1, used)
                     ||hasPathRecu(matrix, rows, cols, i, j+1, str, s+1, used);
            used[index] = false;
        }
        return result;
    }
};

/*
//链接：https://www.nowcoder.com/profile/9565068/codeBookDetail?submissionId=9051291
//来源：牛客网
class Solution {
private:
    bool hasPathRecu(char* matrix, int rows, int cols, int row, int col, char *str, int length, vector<bool> used)
    {
        if(length==strlen(str))
            return true;
        if(row<0||row>=rows||col<0||col>=cols)
            return false;
        int index = col + row*cols;
        bool result = false;
        if( !used[index] && matrix[index]==str[length]){
            used[index] = true;
            result = hasPathRecu(matrix, rows, cols, row-1, col, str, length+1, used)
                    || hasPathRecu(matrix, rows, cols, row+1, col, str, length+1, used)
                    ||hasPathRecu(matrix, rows, cols, row, col+1, str, length+1, used)
                    ||hasPathRecu(matrix, rows, cols, row, col-1, str, length+1, used);
            used[index] = false;
        }
        return result;
    }
public:
    bool hasPath(char* matrix, int rows, int cols, char* str)
    {
        vector<bool> used(strlen(matrix),false);
        if(str==NULL) return true;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(hasPathRecu(matrix, rows, cols, i, j, str, 0, used))
                    return true;
            }
        }
        return false;
     
    }
};
*/
int main(){
    Solution so;
    if(so.hasPath("ABCESFCSADEE",3,4,"ABCCED"))
        cout<<"Exists."<<endl;
    return 0;
}
