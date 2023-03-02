// To Find whether the given triangle is scalen, isoceles or equilateral
#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the Three Sides of a Triangle: \n";
    cout<<"Side 1:";
    cin>>a;
    cout<<"Side 2:";
    cin>>b;
    cout<<"Side 3:";
    cin>>c;

    if(a==b & b==c)
    {
        cout<<"Equilateral Triangle";
    }
    else if (a==b || b==c || c==a)
    {
        cout<<"Isoceles Triangle";
    }
    else
    {
        cout<<"Scalen Triangle";
    }
    return 0;
}
