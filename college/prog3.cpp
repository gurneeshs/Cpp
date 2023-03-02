#include <iostream>
using namespace std;

class Complex
{
    int real;
    float imag;

    public:
    //Default Constructor
    Complex()
    {
        this->real=0;
        this->imag=0.0f;
    }
    //Parametrized constructor
    Complex(int real,float imag)
    {
        this->real=real;
        this->imag=imag;
    }
    //Operator Overloading
    Complex operator+(Complex &ro)
    {
        Complex retobj;
        retobj.real=real+ro.real;
        retobj.imag=imag+ro.imag;
        return retobj;
    }

    void showComplex()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }

};

int main()
{
    Complex c1(5,4.5f),c2(6,6.6f),c3(7,6.9f),c4;

    c1.showComplex();
    c2.showComplex();
    c3.showComplex();
    c4.showComplex();
    c4=c1+c2+c3;
    c4.showComplex();
    return 0;
}