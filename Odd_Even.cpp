#include<iostream>
int main(){
    int N;
    while(std::cin>>N){
        if(N&0x1==1)
            std::cout<<N << " is a odd number"<<std::endl;
        else
            std::cout<<N << " is a even number"<<std::endl;
    }
    return 0;
}
