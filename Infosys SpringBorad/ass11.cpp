/*
Implement the concept of Constructor 
*/
#include <iostream>
using namespace std;

class Customer{
    int custID;
    string custName;
    string custAddress;

    public:
        Customer(){
            this->custID = 0;
            this->custName = "";
            this->custAddress = "";
        }
        Customer(int custID, string custName, string custAddress){
            this->custID = custID;
            this->custName = custName;
            this->custAddress = custAddress;
        }
        Customer(Customer &cu){
            this->custID = cu.custID;
            this->custName = cu.custName;
            this->custAddress = cu.custAddress;
        }
        int getCustID(){
            return this->custID;
        }
        string getCustName(){
            return this->custName;
        }
        string getCustAddress(){
            return this->custAddress;
        }
        ~Customer(){
            cout<<"Object with ID"<<this->custID<<"is destroyed"<<endl;
        }
};

int main(){
    int id;
    string name, address;

    cout<<"Enter Customer id: ";
    cin>>id;
    cout<<"Enter Customer name: ";
    cin>>name;
    cout<<"Enter Customer address: ";
    cin>>address;

    Customer c1, c2(id,name,address), c3(c2);

    cout<<"Customer Details:"<<endl;
    cout<<"Customer ID: "<<c1.getCustID()<<endl;
    cout<<"Customer Name: "<<c1.getCustName()<<endl;
    cout<<"Customer Address: "<<c1.getCustAddress()<<endl;
    cout<<endl;

    cout<<"Customer ID: "<<c2.getCustID()<<endl;
    cout<<"Customer Name: "<<c2.getCustName()<<endl;
    cout<<"Customer Address: "<<c2.getCustAddress()<<endl;
    cout<<endl;

    cout<<"Customer ID: "<<c3.getCustID()<<endl;
    cout<<"Customer Name: "<<c3.getCustName()<<endl;
    cout<<"Customer Address: "<<c3.getCustAddress()<<endl;
    cout<<endl; 
    return 0;
}