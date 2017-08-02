#include<iostream>
#include<vector>
using namespace std;
/*
template <typename T>
void swap_two(T &a, T &b){
    T tmp = a;
    a = b;
    b = tmp;
}
*/
void print_matrix(const vector<vector<int> > &A){
    cout<<"Matrix: "<<endl;
    for(int i=0;i<A.size();++i){
        for(int j=0;j<A[i].size();++j)
            cout<<A[i][j]<<"\t";
        cout<<endl;
    }
    cout<<"..."<<endl;
}
void reverse01(vector<vector<int> >&A){
    int N = A.size();
    //int tmp;
    for(int i=0;i<N;++i){
        for(int j=i;j<N;++j){
            swap(A[i][j],A[j][i]);
            /*
            tmp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = tmp;
            */
        }
            //swap_two(A[i][j],A[j][i]);
    }
    //print_matrix(A);
}
void reverse02(vector<vector<int> >&A){
    int N = A.size();
    //int tmp;
    for(int i=0;i<N;++i){
        for(int j=0;j<N-i;++j){
            swap(A[i][j],A[N-1-j][N-1-i]);
            /*
            tmp = A[N-1-j][N-1-i];
            A[N-1-j][N-1-i] = A[i][j];
            A[i][j] = tmp;
            */
        }
            //swap_two(A[i][j],A[N-1-i][N-1-j]);
    }
    //print_matrix(A);
}
void reverse03(vector<vector<int> >&A){
    int N = A.size();
    int tmp;
    for(int j=0;j<N/2;++j)
        swap(A[j],A[N-1-j]);
    for(int i=0;i<N;++i){
        for(int j=i;j<N;++j){
            swap(A[i][j],A[j][i]);
        }
            //swap_two(A[i][j],A[N-1-i][N-1-j]);
    }
        //print_matrix(A);
}


int main(){
    int N ;
    while(cin>>N){
        vector<vector<int> > A(N,vector<int>(N,0));
        for(int i=0;i<N;++i){
            for(int j=0;j<N;++j)
                cin>>A[i][j];
        }
        print_matrix(A);
        //reverse01(A);
        //print_matrix(A);        
        //reverse02(A);
        //print_matrix(A);
        reverse03(A);
        print_matrix(A);
    }

    return 0;
}
