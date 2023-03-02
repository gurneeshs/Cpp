#include <iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"Enter the no. of Rows:";
    cin>>n;

    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            cout<<"* \t";
        }
        cout<<endl;
    }

    cout<<"Inverted Pyramid:"<<endl;
    cout<<"Enter the no. of Rows:";
    cin>>n;

    for (i=n;i>=1;i--)
    {
        for (j=1;j<=i;j++)
        {
            cout<<"* \t";
        }
        cout<<endl;
    }
    return 0;
}