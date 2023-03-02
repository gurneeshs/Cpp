// To print odd natural numbers using continue statement
#include<iostream>
using namespace std;

int main()
{
    int n,a;
    cout<<"Enter any Natural Number n:";
    cin>>n;
    cout<<"The Odd Natural Numbers till n :\n ";

    for (a=0;a<n;a++)
    {
        
        if (a%2==0)
        {
            continue;
        }
        cout<<a<<endl;

    }
    return 0;
}