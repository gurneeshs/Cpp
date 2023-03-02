#include <iostream>
#include<malloc.h>
using namespace std;
int main() {
    int i,j,k;
    int **m1, **m2,**rm;
    int r1, c1, r2, c2;
    r1=3, c1=3, r2=3, c2=3;
    m1=(int **)malloc(r1 * sizeof(int *));
    m2=(int **)malloc(r2 * sizeof(int *));
      rm=(int **)malloc(r1 * sizeof(int *));
    for(i=0;i<r1;i++)//first matrix
    {
        m1[i]=(int *)malloc(c1*sizeof(int));
    }
    for(i=0;i<r2;i++)//second matrix
    {
        m2[i]=(int *)malloc(c2*sizeof(int));
    }
    for(i=0;i<r1;i++)//resultant matrix
    {
        rm[i]=(int *)malloc(c1*sizeof(int));
    }
for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<"Enter first matrix element ";
            cin>>m1[i][j];
        }
    }
   for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<"Enter second matrix element ";
            cin>>m2[i][j];
        }
    }
    cout<<"first matrix\n";
for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<m1[i][j]<<" ";
        }
    cout<<endl;
    }
cout<<"second matrix\n";
for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<m2[i][j]<<" ";
        }
    cout<<endl;
    }
 for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            rm[i][j]= m1[i][j]+ m2[i][j];
        }
    cout<<endl;
    }
cout<<"Addition matrix  \n";
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