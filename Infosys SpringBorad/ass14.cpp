/*
Problem Description:

Hello Host is a tiffin who undertakes home delivery of dinner to their customer .They want to automate the process of billing for its customers.Write a C++ program to implement the below class diagram.

Business Rules:

Hello host provides only vegetarian food costing Rs 50 per tiffin.

Ocassional customers are provided only one tiffin per person.

Occasional customers have to pay delivery charge based on distance in kms in addition to tiffin cost.Refer the table below to identify the delivery charge.

Distance in KmsDelivery charge in Rs

Between 1 and 2 (both inclusive)Rs  5 per Km

Between 2 and 5 (excluding 2, including 5)Rs  7.5 per Km

4.Regular customers are provided dinner on all the five working days (i.e Monday to Friday)

Implementation Details :

Customer Class:

Constructor: Initalizes customeName

OccasionalCustomer class

Constructor : Initializes distancekInKms. Auto-generate billId,Prefixed with 'O' followed by a number  starting from 1001 .Use counter variable appropriately for implementing the logic.

ValidateDistanceInKms() method:

Distance in kms must be between 1 and 5 kms (both inclusive)

If distance in kms is valid ,this method must return true .Otherwise ,it must display and appropriate error message and return else

CalculateBillAmount() method:

Invoke validateDistanceInKms() method .If it return false,display an appropriate error message and return 0.

Otherwise,calculate the bill amount as follows  and return the same :

Bill Amount =Tiffin charge +Delivery charge

Refer ,business rules to identify tiffin charge and delivery charge.

RegularCustomer Class

Constructor:Initializes noOfTiffin.Autu-genarate billId ,prefixed with 'R' followed by a number starting from 101.Use counter variable appropriately for implementing the logic.

ValidateNoOfTiffin() method:

Number of tiffin must be between 1 and 3 (both inclusive)

If number of tiffin is valid ,this method must return true.otherwise it must display and appropriate error message and return false.

CalculateWeekBillAmount() method:

Invoke validateNoOfTiffin() method .If it return false,display an appropriate error  message and return 0.

Otherwise,calculate the weekly bill amount  as follows and return the same :

Weekly Bill Amount =noOfTiffin*TiffinCharge*Number of days dinner is provided 

Refer ,business rules to identify tiffin charge and number of days dinner is provided .

Starter Class:

Write a starter class  named Demo . In main method

Create an object of RegularCustomer class by passing  appropriate  values  to the constructor

Invoke the getter methods and display all the instance variable values of RegularCustomer object created.

Invoke calculateWeeklyBillAmount() method from object of RegularCustomer class created  and display the weekly bill amount returned by the method.

Create a object  of OccassionalCustomer class by passing appropriate values to the customer 

Invoke the getter methods and display all the instance variable values of the OccassionalCustomer object created .

Invoke calculateBillAmount() method  from the object OccassionalCustomer class created and display the bill amount returned by the method .



Note : Try executing the code in your own compiler to test for different inputs and get the desired output.

 

Starter Code:
*/
#include<iostream>
using namespace std;

class Customer{
    string custName;
    public:
        Customer(string name){
            this->custName = name;
        }
        string getCustomerName(){
            return this->custName;
        }
        void display(){
            cout<<"Customer Name:"<<getCustomerName()<<endl;
        }
};

class OccasionalCustomer : public Customer{
    int distance;
    string billid;
    static int counter;

    public:
        OccasionalCustomer(string name, int distance):Customer(name){
            this->distance = distance;
            billid = "O" + to_string(counter + 1001);
            counter++;
        }

        bool validateDistanceInKms(){
            if(distance>=1 && distance<=5){
                return true;
            }
            else{
                cout<<"Distance must be between 1 and 5 Kms"<<endl;
                return false;
            }
        }

        double calculateBillAmount(){
            if(validateDistanceInKms()){
                double deliveryCharge = 0;

                if(distance>=1 && distance<=2){
                    deliveryCharge = distance * 5;
                }
                else if(distance>2 && distance<=5){
                    deliveryCharge = distance * 7.5;
                }
                double billAmount = 50 + deliveryCharge;
                return billAmount;
            }
            else{
                return 0;
            }
        }

        string getBillId(){
            return billid;
        }
        int getDistance(){
            return distance;
        }
        void display(){
            Customer::display();
            cout<<"Bill ID: "<<getBillId()<<endl;
            cout<<"Distance: "<<getDistance()<<endl;
            cout<<"Bill Amount: "<<calculateBillAmount()<<endl;
        }
};
int OccasionalCustomer::counter = 0;

class RegularCustomer:public Customer{
    int noOFTiffin;
    string billID;
    static int counter;

    public:
        RegularCustomer(string name, int tiffin):Customer(name){
            this->noOFTiffin = tiffin;
            billID = "R" + to_string(counter + 101);
            counter++;
        }

        bool validateNoOFTiffin(){
            if(noOFTiffin>=1 && noOFTiffin<=3){
                return true;
            }
            else{
                cout<<"Tiffin should be between 1 and 3"<<endl;
                return false;
            }
        }

        double calculateWeekBillAmount(){
            if(validateNoOFTiffin()){
                double weekBillAmount = noOFTiffin*50*5;
                return weekBillAmount;
            }
            else{
                return 0;
            }
        }
        void display(){
            Customer::display();
            cout<<"Bill ID: "<<billID<<endl;
            cout<<"No. of Tiffin"<<validateNoOFTiffin()<<endl;
            cout<<"Bill Amount: "<<calculateWeekBillAmount()<<endl;
        }
};
int RegularCustomer::counter = 0;

int main()
{
    RegularCustomer r1("Harsh",2);
    OccasionalCustomer o1("Girish",3);

    r1.display();
    o1.display();

    return 0;
}
