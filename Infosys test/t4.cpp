#include <iostream>
using namespace std;

class Test{
    public:
        int i;
        void get();
};
void Test::get(){
    cout<<"Enter the value of i:";
    cin>>i;
}
Test t;
int main(){
    Test t;
    t.get();
    cout<<"Value of i in local t:"<<t.i<<'n';
    ::t.get();
    cout<<"Value of i in global t:"<<::t.i<<'n';
    return 0;

}