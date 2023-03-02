#include <iostream>
using namespace std;

void largest(int a,int b)
{
    if(a>b)
    {
        cout<<"Largest number is "<<a<<endl;
    }
    else{
        cout<<"Largest number is"<<b<<endl; 
    }
}

void largest(int arr[],int siz)
{
    int max,i;
    max=arr[0];

    for(i=0;i<siz;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }

    cout<<"Largest Number is "<<max<<endl;
}

int main()
{
    int a,b;
    int arr[]={10,50,700,54,60,23,1,85,9,7216};
    cout<<"Enter the 1st Number:";
    cin>>a;
    //cout<<endl;
    cout<<"Enter the 2nd Number:";
    cin>>b;

    largest(arr,10);

    return 0;
}