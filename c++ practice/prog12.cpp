// To print Prime Numbers in the given range

#include<iostream>
using namespace std;

int main()
{
    int a,b,c,num;
    cout<<"Enter the Range";
    cin>>a>>b;

    for (num=a;num<=b;num++)
    {
        for (c=2;c<num;c++)
        {
            if (num%c==0)
            {
                break;
            }
        }
        if (c==num)
        {
            cout<<num<<endl;
        }
    }
    return 0;
}
