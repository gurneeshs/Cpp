/*
Write a C++ program to print a binomial coefficient table.

Input:

10

Output:

Mx 0 1 2 3 4 5 6 7 8 9 10
----------------------------------------------------------
0 1
1 1 1
2 1 2 1
3 1 3 3 1
4 1 4 6 4 1
5 1 5 10 10 5 1
6 1 6 15 20 15 6 1
7 1 7 21 35 35 21 7 1
8 1 8 28 56 70 56 28 8 1
9 1 9 36 84 126 126 84 36 9 1
10 1 10 45 120 210 252 210 120 45 10 1

----------------------------------------------------------*/

#include <iostream>
using namespace std;
int fact(int num){
    int ans=1;
    for(int i=num;i>=1;i--){
        ans = ans*i;
    }
    return ans;
}
int nCr(int n, int r){
    int num = fact(n);
    int den = fact(r)*fact(n-r);

    int ans = num/den;
    return ans;
}
int main(){

    cout<<"Enter Number";
    int num;
    cin>>num;

    cout<<"Mx"<<" ";
    for (int i=0;i<=num;i++){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"------------------------------------------------------------------------"<<endl;
    for(int i=0;i<=num;i++){
        cout<<i<<" ";
        for(int j=0;j<=i;j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }    
    return 0;
}