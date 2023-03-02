#include <iostream>
#include <malloc.h>

using namespace std;

int main()
{
    int i,j,k;
    int **m1,**m2,**rm;
    int r1,c1,r2,c2;
    
    r1=3,c1=3,r2=3,c2=3;
    m1=(int**)malloc(r1*sizeof(int*));
    m2=(int**)malloc(r2*sizeof(int*));
    rm=(int**)malloc(r1*sizeof(int*));
    
    //First Matrix
    for(i=0;i<r1;i++)
    {
        m1[i]=(int*)malloc(c1*sizeof(int));
    }

    //Second Matrix
    for(i=0;i<r1;i++)
    {
        m2[i]=(int*)malloc(c2*sizeof(int));
    }

    //Resultant Matrix
    for(i=0;i<r1;i++)
    {
        rm[i]=(int*)malloc(c1*sizeof(int));
    }
    cout<<"Enter First Matrix Elemnt"<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cin>>m1[i][j];
        }
    }

    cout<<"Enter Second Matrix Elemnt"<<endl;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cin>>m2[i][j];
        }
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            rm[i][j]=m1[i][j]+m2[i][j];
        }
    }

    cout<<" First Matrix"<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<" Second Matrix"<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<m2[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<" Resultant Matrix"<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<rm[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}