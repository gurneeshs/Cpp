// PROGRAM 1

#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter 1st Number:";cin>>a;
    cout<<"Enter 2nd Number:";cin>>b;

    cout<<"\n Before Swapping";
    cout<<"\n 1st Number:";cout<<a;
    cout<<"\n 2nd Number:";cout<<b;
    
    c=a;
    a=b;
    b=c;
    
    cout<<"\n After Swapping";
    cout<<"\n 1st Number:";cout<<a;
    cout<<"\n 2nd Number:";cout<<b;

    return 0;
}

