#include <iostream>
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

// using namespace std;

namespace SeniorEmp{
    class Employee{
        private:
            int empno;
            std::string empname;
            float basicsalary;
        public:
            Employee(){
                this->empno = 0;
                this->empname = "";
                this->basicsalary = 0.0;
            }
            Employee(int empno, std::string empname, float basicsalary){
                this->empno = empno;
                this->empname  = empname;
                this->basicsalary = basicsalary;
            }
            double calculateSalary(){
                basicsalary = basicsalary + basicsalary*(0.15);
                return basicsalary;
            }
    };
}
namespace JuniorEmp{
    class Employee{
        private:
            int empno;
            std::string empname;
            float basicsalary;
        public:
            Employee(){
                this->empno = 0;
                this->empname = "";
                this->basicsalary = 0.0;
            }
            Employee(int empno, std::string empname, float basicsalary){
                this->empno = empno;
                this->empname  = empname;
                this->basicsalary = basicsalary;
            }
            double calculateSalary(){
                double sal = this->basicsalary;
                sal+= sal*(0.08);
                return sal;
            }
    };
}
#endif

// using namespace std;

int main(){
    SeniorEmp::Employee Se1(1001,"Gurneesh",1000);
    JuniorEmp::Employee Je1(2002, "Girish",1000);

    std::cout<<"Salary of Senior employee"<<Se1.calculateSalary()<<std::endl;
    std::cout<<"Salary of Junior employee"<<Je1.calculateSalary()<<std::endl;
    return 0;
}