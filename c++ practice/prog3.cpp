// To Find Maximum of three Numbers
#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter Three Numbers";
    cin>>a>>b>>c;

    if(a>b)
    {
        if(a>c)
        {
            cout<<"Largest Number is :";
            cout<<a;
        }
        else
        {
            cout<<"Largest Number is :";
            cout<<c;
        }
    }
    else 
    {
        if(b>c)
        {
            cout<<"Largest Number is :";
            cout<<b;
        }
        else
        {
            cout<<"Largest Number is :";
            cout<<c;
        }
    }
    return 0;
}