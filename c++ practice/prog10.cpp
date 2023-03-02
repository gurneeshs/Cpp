// To Check Given number is prime number
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter any Number:";
    cin>>a;

    for (b=2;b<a;b++)
    {
        if (a%b==0)
        {
            cout<<"Non Prime";
            break;
        }    
    }
    if (b==a)
    {
        cout<<"Prime";
    }
    return 0;
}