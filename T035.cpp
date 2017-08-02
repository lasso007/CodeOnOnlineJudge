#include<iostream>
using namespace std;
class Solution {
public:
    int movingCount(int threshold, int rows, int cols)
    {
        int result = 0;
        if(threshold<0||rows<0||cols<0)
            return result;
        int N = rows>cols ? rows:cols;
        int *int_to_sum = new int[N]();
        for(int i=0;i<N;++i)
            int_to_sum[i] = convert_to_sum(i);
        bool *used = new bool[rows*cols]();
        calc(used, rows, cols, 0, 0,threshold, int_to_sum,result);
        //cout<<"result:"<<result<<endl;
        return result;
    }
private:
    void calc(bool *used, int rows, int cols, int i, int j,int threshold,
                                            int *int_to_sum, int &result){
        if(i>=0&&i<rows&&j>=0&&j<cols){
            int s = i*cols + j;
			if(used[s]==false&&(int_to_sum[i]+int_to_sum[j]<=threshold))
            {
                used[s] = true;
                ++result;
            
                calc(used, rows, cols, i-1, j, threshold, int_to_sum,result);
                calc(used, rows, cols, i+1, j, threshold, int_to_sum,result);
                calc(used, rows, cols, i, j-1, threshold, int_to_sum,result);
                calc(used, rows, cols, i, j+1, threshold, int_to_sum,result);           
                //cout<<"(i,j)"<<i<<", "<<j<<"\tresult:"<<result<<endl; 
            } 
        }
        
    }   

    int convert_to_sum(int index){
        int res = 0;
        while(index>0){
            res += index%10;
            index /= 10;
        } 
        return res;
    }
};


int main(){
    Solution so;
    cout<<"result:"<<so.movingCount(3, 4, 4);
    return 0;
}
