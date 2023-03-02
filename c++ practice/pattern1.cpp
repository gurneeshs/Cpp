#include <iostream>
using namespace std;
int main()
{
    int i,j,r,c;
    cout<<"Enter the no. of rows:"<<endl;
    cin>>r;
    cout<<"Enter the no. of Columns:"<<endl;
    cin>>c;

    for (i=1;i<=r;i++)
    {
        for (j=1;j<=c;j++)
        {
            cout<<"* \t";
        }
        cout<<endl;
    }
    return 0;
}