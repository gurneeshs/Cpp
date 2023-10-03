/*
Problem Description

Write a C++ program which accepts 5 student records .The records of each student will include student id, name and total marks, grade and percentage. Display the details of all the students at the end.

Step 1: Store the student details in a structure. We can use a character array

to store the names i.e the character array will be a member of the structure

Step 2: Create an array for 5 structure variables to access the information for 5 Students

Step 3: Accept the information from the user to store the details of the students

Step 4: Use a display function which will display the details. The display function should accept structure reference variable as parameter

 

Note : Try executing the code in your own compiler to test for different inputs and get the desired output.

Starter Code:
*/

#include<iostream>
using namespace std;
struct student{
    int studid;
    string sname;
    int totalmarks;
    int grade;
    int percentage;
};
void printInfo(student stud){
    cout<<"***********************************"<<endl;
    cout<<"Student ID: "<<stud.studid<<endl;
    cout<<"Student Name: "<<stud.sname<<endl;
    cout<<"Student TotalMarks: "<<stud.totalmarks<<endl;
    cout<<"Student Grade: "<<stud.grade<<endl;
    cout<<"Student Percentage: "<<stud.percentage<<endl;
    cout<<endl;

}
int main()
{
    student* stud = new student[5];
    cout<<"Enter Student Information:"<<endl;
    for(int i=0;i<5;i++){
        cout<<"Enter Student Id: ";
        cin>>stud[i].studid;
        cout<<"Enter Student Name: ";
        cin>>stud[i].sname;
        cout<<"Enter Student Total Marks: ";
        cin>>stud[i].totalmarks;
        cout<<"Enter Student Grade: ";
        cin>>stud[i].grade;
        cout<<"Enter Student Percentage: ";
        cin>>stud[i].percentage;

    }
    for(int i=0;i<5;i++){
        printInfo(stud[i]);
    }
    return 0;
}