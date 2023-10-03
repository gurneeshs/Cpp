/*
Assignment: Overriding and Dynamic Binding
Objective: To understand the concept of Overriding and Dynamic binding
Problem Description:
Write a C++ program to implement the given Class Diagram.
In the main program use pointers of publisher type, create objects of Book and
Tape. Invoke IsOverSize() method of both objects using the pointer
Implementation of IsOverSize method in Publisher Class:
isOverSize method will be considered as pure virtual function, where only the
method definition will be available, implementation will be given only in the
derived class. Pure Virtual function (also known as abstract methods) is defined by
assigning the method to 0 as shown below.
virtual int isOversize() = 0;
Implementation of IsOverSize method in Book Class:
 If the NoOfpages is greater than 800, return 1 to indicate oversize.
 In main(), display the string “Book exceeds maximum size”
Implementation of IsOverSize method in Tape Class:
 If the Playing Time is greater than 90 minutes, return 1 to indicate oversize.
 In main(), display the string “Playing Time is Longer”
*/

#include <iostream>
using namespace std;

class Publisher{
    string title;
    float price;
    public:
        Publisher(string title, float price){
            this->title = title;
            this->price = price;
        }
        virtual int isOverSize() = 0;
};

class Book:public Publisher{
    int noofpages;
    public:
        Book(string title, float price, int noofpages):Publisher(title,price){
            this->noofpages = noofpages;
        }
        int isOverSize(){
            if(noofpages>800){
                return 1;
            }
            else{
                return 0;
            }
        }
};

class Tape:public Publisher{
    float playingTime;
    public:
        Tape(string title, float price, float playingTime):Publisher(title,price){
            this->playingTime = playingTime;
        }
        int isOverSize(){
            if(playingTime>90){
                return 1;
            }
            else{
                return 0;
            }
        }
};

int main(){
    Book b1("Humans",124.5,950);
    Tape t1("GSNSM",145.3,97);
    if (b1.isOverSize()){
        cout<<"Book Exceeds Maximum Size"<<endl;
    }
    if(t1.isOverSize()){
        cout<<"Playing Time is longer"<<endl;
    }
    return 0;
}