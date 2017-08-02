#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    string ReverseSentence(string str) {
        int start = 0, end;
        while(start<str.size()){
            while(start<str.size()&&str[start]==' ')
                ++start;
            end = start;
            while(end<str.size()&&str[end]!=' ')
                ++end;
            --end;
            reverse_string(str,start,end);
            start = end + 1;
        }
        reverse_string(str,0,str.size()-1);
        return str;
    };
private:
    void reverse_string(string &s, int left, int right){
        char tmp;
        while(left<right){
            tmp = s[left];
            s[left] = s[right];
            s[right] = tmp;
            ++left;
            --right;
        }
    }
};
int main(){
    string s;
    Solution so;
    while(getline(cin, s)){
        cout<<"result: "<<so.ReverseSentence(s)<<endl;
    }
    return 0;
}
