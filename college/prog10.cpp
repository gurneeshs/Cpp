//To Store Student Record in a file
#include <iostream>
#include <fstream>
using namespace std;


int main()
{

    int rno;
    float cgpa;
    string sname;
    
    cout<<"Enter Name of Student:";cin>>sname;
    cout<<"Enter Rollno. of Student:";cin>>rno;
    cout<<"Enter CGPA of Student:";cin>>cgpa;

    ofstream obj;
    obj.open("f:/Samplefile.txt");
    obj<<"RollNo"<<rno<<endl<<"CGPA"<<cgpa<<endl<<"Student Name"<<sname<<endl;

    return 0;
}