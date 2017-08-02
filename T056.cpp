#include<iostream>
#include<vector>
using namespace std;
int QuickSortMethod(vector<int> s, int low, int high){
    if(low<=high){
        int left = low, right = high;
        int key = s[low];
        while(left<right){
            while(left<right&&s[right]>=key)
                --right;
            s[left] = s[right];
            while(left<right&&s[left]<=key)
                ++left;
            s[right] = s[left];
        }
        s[left] = key;
        if(left==2)
            return key;
        else if(left<2)
            return QuickSortMethod(s, left+1, high);
        else
            return QuickSortMethod(s, low, left-1);
    }
    return -1;
}
int main(){
    int num;
    while(cin>>num){
        vector<int> s(num,0);
        for(int i=0;i<num;++i){
            cin>>s[i];
        }
        if(num<3)
            cout<<-1<<endl;
        else
            cout<<QuickSortMethod(s, 0, num-1)<<endl;
        
    }
    return 0;
}
