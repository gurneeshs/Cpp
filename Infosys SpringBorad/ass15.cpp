/*
Assignment: Operator Overloading
Objective: To understand compile-time Polymorphism: Operator Overloading
Problem Description:
Implement the following class:
Estimated time: 30 mins
In the main function,
Step 1: Create 3 objects of type String.
Step 2: Set values for 2 objects by invoking SetName ().
Step 3: Invoke the + method as follows.
oString3 = oString1 + oString2
Step 4: Display the concatenated value of oString3 by invoking GetName().*/

#include <iostream>
#include <string>
using namespace std;

class String{
    string name;

    public:
        String(){

        }
        void setName(string name){
            this->name = name;
        }
        string getName(){
            return name;
        }
        String operator + (String &str){
            String retStr;
            retStr.name = name + str.name;
            return retStr;
        }

};

int main(){
    String s1,s2,s3;
    s1.setName("Gurneesh");
    s2.setName("Singh");

    cout<<"Value of s1: "<<s1.getName()<<endl;   
    cout<<"Value of s3: "<<s2.getName()<<endl; 
    s3 = s1+s2;  
    cout<<"Value of s3: "<<s3.getName()<<endl;  
    return 0; 

}