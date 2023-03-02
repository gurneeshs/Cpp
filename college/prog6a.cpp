#include<iostream>
using namespace std ;

class Student{
    
    int rno ;
    float cgpa ;
    string sname ;
    
    public :
    Student()
    {
        cout<<"I'm a student"<<endl;
    }
        
        void payFee(){
            cout<<"I am a fee counter"<<endl;
            
        }
         void attendClasses(){
            cout<<"I am in class"<<endl;
            
        }
         void appearinExam(){
            cout<<"I am in exam hall"<<endl;
            
        }
         void getResult(){
            cout<<"Result announced"<<endl;
            
        }
};

class BtechStudent : public Student 
{
    public :
    BtechStudent(){
        cout<<"I am a Btech Student"<< endl ;
        
    }
};



int main(){
    BtechStudent bt ;
    bt.payFee();
    bt.attendClasses();
    bt.appearinExam();
    bt.getResult();

return 0;
}