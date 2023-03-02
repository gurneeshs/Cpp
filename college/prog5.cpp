#include <iostream>
using namespace std;
int cobj;
int dobj;
class Count
{
    public:
    

    Count()
    {
        cobj++;
    }
    ~Count()
    {
        dobj++;
    }
};

int main()
{
    Count *c1,*c2,*c3,*c4;
    c1=new Count();
    c2=new Count();
    c3=new Count();
    c4=new Count();
    cout<<"Number of Objects Created:"<<cobj<<endl;
    delete c1;
    cout<<"Number of Objects Destroyed:"<<dobj<<endl;
    return 0;
}
