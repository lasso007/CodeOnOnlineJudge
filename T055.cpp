/*
 假定一种编码的编码范围是a ~ y的25个字母，从1位到4位的编码，如果我们把该编码按字典序排序，形成一个数组如下： a, aa, aaa, aaaa, aaab, aaac, … …, b, ba, baa, baaa, baab, baac … …, yyyw, yyyx, yyyy 其中a的Index为0，aa的Index为1，aaa的Index为2，以此类推。 编写一个函数，输入是任意一个编码，输出这个编码对应的Index.
*/
#include<iostream>
using namespace std;
int main(){
    string s;
    while(cin>>s){
        int sum = 0, curSum = 0;
        int n = s.size();
        for(int i=0; i<4;++i){
            if(i<n)
                curSum += s[i]-'a';
            sum += curSum;
            if(i<n-1)
                sum += 1;
            curSum *= 25;
        }
        cout<<sum<<endl;
    }
    return 0;
}
