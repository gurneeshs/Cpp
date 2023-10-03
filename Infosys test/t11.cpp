#include <iostream>
using namespace std;

class BaseA
{
    public:
        BaseA(){
            cout<<"BaseA Constructor is called"<<endl;
        }
};

class BaseB{
    public:
        BaseB(){
            cout<<"BaseB Constructor is called"<<endl;
        }
};

class Derived:public BaseA, public BaseB{
    public:
        Derived(){
            cout<<"Derived Constructor called"<<endl;
        }
};

int main(){
    Derived derived;
    return 0;
}