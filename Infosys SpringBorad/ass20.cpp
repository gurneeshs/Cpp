/*
Write a program to do the following operations:

Create a vector to store 10 employee numbers

Accept 10 employee numbers from the user and store it in Vector object

Reverse the vector elements and print the same using an Vector Iterator

Insert 2 elements at the beginning of the vector

Append 2 elements at the end of the vector and print the vector elements using the Iterator

Remove three elements at the end of the vector

Create another vector to store 10 employee numbers

Swap the contents of the vectors 1 & 2 and print the same

Note : Try executing the code in your own compiler to test for different inputs and get the desired output.

Starter Code:
*/
#include<iostream>
using namespace std;
#include <vector>

int main()
{
    int num;
    vector<int> v1;
    for(int i=0;i<10;i++){
        cout<<"Enter Employee Number:";
        cin>>num;
        v1.push_back(num);
    }
    

    return 0;
} 
