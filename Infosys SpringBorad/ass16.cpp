/*
Objective: To understand compile-time polymorphism: Function overloading
Problem Description:
Write a C++ program that will implement the following functionalities:
 void Add(int,int);
 To Add the given 2 integer numbers and print the sum.
 void Add(char[],char[]);
 To Concatenate the given 2 character array (strings) and print the
concatenated string.*/
#include <iostream>
using namespace std;

class String{
    string name;
    public:
        String(){
        }
        void setName(string nam){
            name = nam;
        }
        void getName(){
            cout<<"Name:"<<name<<endl;
        }
        String operator + (String& str){
            String stobj;
            stobj.name = name + str.name;
        }
};

int main(){
    String sobj1, sobj2, sobj3;
    sobj1.setName("Gurneesh");
    sobj2.setName("Singh");
    sobj3 = sobj1 + sobj2;
    sobj3.getName();
    return 0;
}