#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N,L;
    while(cin>>N>>L){
        int tmp,x=0,y=L;
        int flag = true;
        while(flag)
        { 
            tmp = 2*N-(y-1)*y;
            if(tmp<0){
                flag = false;
                break;
            }
            //cout<<"y:"<<y<<"\ttmp:"<<tmp<<endl;
            if(tmp%(2*y)==0){
                x = tmp/(2*y);
                break;
            }
            ++y;
        }

        if(flag){
            //cout<<"result-> \tx:"<<x<<"\ty:"<<y<<endl;
            for(int i=0;i<y-1;++i)
                cout<<x+i<<" ";
            cout<<x+y-1<<endl;
        }else
            cout<<"NO"<<endl;
    }
    return 0;
}
