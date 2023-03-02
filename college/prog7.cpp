#include <iostream>
using namespace std;

class XYZ
{
    int n1,n2;
    public:

    XYZ()
    {
        n1=0;
        n2=0;
    }

    XYZ(int n1,int n2)
    {
        this->n1=n1;
        this->n2=n2;
    }

    friend int doAddition(XYZ &ro);
};

int doAddition(XYZ &ro)
{
    return ro.n1+ro.n2;
}

int main()
{
    XYZ obj(2,4);
    cout<<"Addition is:"<<doAddition(obj);
    return 0;
}