/*
Write a user defined function named cross_upper_triangle() which takes a two dimensional array A, with size N rows and N columns as argument and prints the triangle of the array.

Eg: 

* * * * *

* * * *

* * *

* *

*

hint:

First try to print N X N matrix of * 

* * * * * 

* * * * * 

* * * * * 

* * * * * 

* * * * * 

 

Note : Try executing the code in your own compiler to test for different inputs and get the desired output.
*/
#include<iostream>
using namespace std;

void cross_upper_triangle(int n)
{
    string arr[n][n];
    for(int i = 0;i<n;i++){
        for(int j=0;j<n-i;j++){
            arr[i][j] = "*";
        }
    }
    for(int i = 0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    
}

int main()
{
    cross_upper_triangle(5);
    return 0;
}