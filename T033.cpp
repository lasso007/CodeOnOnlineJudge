#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void Insert(int num)
    {
        int i = A.size()-1;
		A.push_back(num);            
        while(i>=0&&A[i]>num){
            A[i+1] = A[i];
            --i;
        }
        A[i+1] = num;
        //print_vector(A);
        //cout<<GetMedian()<<endl;;
    }
    
    void print_vector(vector<int> A){
        for(vector<int>::iterator it = A.begin();it!=A.end();++it)
            cout<<*it<<"\t";
        cout<<endl;
    }

    double GetMedian()
    {
        print_vector(A);
        int N = A.size();

        /*if(N&0x1==1)
            cout<<N<<" is a odd number"<<endl;
        else
            cout<<N<<" is a even number"<<endl;
        */
        if(N&0x1==1)
            return 1.0*A[N/2]; 
        else
            return (A[N/2]+A[N/2-1])/2.0;       
    }
private:
    vector<int> A;
    
    

};

int main(){
    Solution so;
    so.Insert(5);
    so.Insert(2);
    so.Insert(3);
    so.Insert(4);
    so.Insert(1);
    so.Insert(6);
    so.Insert(7);
    so.Insert(0);
    so.Insert(8);
    cout<<so.GetMedian()<<endl;;
    return 0;
}
