#include<iostream>
#include<set>
using namespace std;
int main(){
    int num;
    while(cin>>num){
        set<int> s;
        int tmp;
        for(int i=0;i<num;++i){
            cin>>tmp;
            s.insert(tmp);
        }
        int result = -1;
        if(s.size()>2){
            set<int>::iterator it = s.begin();
            ++it;
            ++it;
            result = *it;
        }
        cout<<result<<endl;        
    }
    return 0;
}
