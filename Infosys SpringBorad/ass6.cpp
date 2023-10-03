/*Write a C++ program that will implement the following functionalities:

void Add(int,int);

To Add the given 2 integer numbers and print the sum.

void Add(char[],char[]);

To Concatenate the given 2 character array (strings) and print the concatenated string.

 

Note : Try executing the code in your own compiler to test for different inputs and get the desired output.

Starter Code:
*/
#include<iostream>
using namespace std;
void Add(int,int);
void Add(char[],char[]);
void Add(int a,int b)
{
    cout<<a+b<<endl;
}
void Add(char a[],char b[])
{
    string str1 = a;
    string str2= b;
    cout<<str1+str2<<endl;
}
int main()
{
    cout<<"Enter two numbers:";
    int a,b;
    cin>>a>>b;
    Add(a,b);

    cout<<"Enter two Strings:";
    char ch1[40], ch2[40];
    cin>>ch1>>ch2;
    Add(ch1,ch2);

    return 0;
}