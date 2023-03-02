#include <iostream>
using namespace std;

class Manager
{
    public:
    int id;
    string name;
    //Profit p;
    Profit* p1;
    
    Manager(int id,string name)
    {
        this->id=id;
        this->name=name;
    }

    void getSalary()
    {
        int a=p1->project();
        if (a==10)
        {
            cout<<"Salary is credited in Manager Account";
        }
        else{
            cout<<"Salary is not credited in Manager Account";
        }
    }

    void getName()
    {
        cout<<name;
    }

};

class Profit
{
    int proj;
    public:
    
    int project()
    {
        cout<<"Enter the Project Number";
        cin>>proj;
        return proj;
    }
};

int main()
{
    Manager m1(101,"Hardik");
    m1.getName();
    m1.getSalary();
    return 0;
}