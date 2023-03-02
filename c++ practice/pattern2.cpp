#include <iostream>
using namespace std;
int main()
{
    int i,j,r,c;
    cout<<"Enter the rows:"<<endl;
    cin>>r;
    cout<<"Enter the Columns:"<<endl;
    cin>>c;

    for (i=1;i<=r;i++)
    {
        for (j=1;j<=c;j++)
        {
            if (i==1 || j==1 || i==r || j==c)
            {
                cout<<"* \t";
            }
            else 
            {
                cout<<" \t";
            }
        }
        cout<<endl;
    }
    return 0;
}