#include<iostream>
using namespace std ;
class Student{
    
    int rno ;
    float cgpa ;
    string sname ;
    
    public :
    Student(){
        cout<<"I'm a student"<<endl;}
        
         void attendClasses()
         {
            cout<<"I am in class"<<endl;
            
        }
         void getResult(){
            cout<<"Result announced"<<endl;
            
        }

};

class PartTimeEmployee{
    
    int eid ;
    float salary ;
    string ename ;
    
    public :
    PartTimeEmployee(){
        cout<<"I'm a Part Time Employee"<<endl;}
        
         void performDuty()
         {
            cout<<"I am in office from  6pm-10 pm"<<endl;
            
        }
         void getSalary(){
            cout<<"salary credited in employee account"<<endl;
            
        }

};


class FlexyStudent : public Student,public PartTimeEmployee
{
    public :
    FlexyStudent(){
        cout<<"I am a Day time Student and Evening hours Employee"<< endl ;
        
    }
};

int main(){
    FlexyStudent fs1 ;
    fs1.attendClasses();//left base
    fs1.performDuty();//right base
    fs1.getResult();//left base
    fs1.getSalary();//right base
    
    return 0 ;
}