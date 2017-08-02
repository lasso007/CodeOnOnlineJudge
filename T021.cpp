#include<iostream>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;
bool compare01(string s1, string s2){
        return (s1+s2)<(s2+s1);
};
class Solution {
public:
    
    string PrintMinNumber(vector<int> numbers) {
        vector<string> r;
        string tmp;
        stringstream st;
        for(vector<int>::iterator it=numbers.begin();it!=numbers.end();++it){
            st<<*it;
            st>>tmp;
            r.push_back(tmp);
            st.clear();
        }
        sort(r.begin(),r.end(),compare01);
        string result;
        for(vector<string>::iterator it=r.begin();it!=r.end();++it)
            result += *it;
        return result;
    }
};
int main()
{

	return 0;
}
