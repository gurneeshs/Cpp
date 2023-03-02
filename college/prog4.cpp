#include <iostream>
using namespace std;
class Student
{
	public:
	int roll_no;
	string s_name;
	float cgpa;
	
	void setDetails()
	{
		cout<<"Enter Roll_no"<<endl;
		cin>>roll_no;
		cout<<"Enter Student Name"<<endl;
		cin>>s_name;
		cout<<"Enter CGPA"<<endl;
		cin>>cgpa;		
	}
	
	void getDetails()
	{
		cout<<"Rollno:"<<roll_no;
		cout<<"\tName:"<<s_name;
		cout<<"\tCGPA:"<<cgpa<<endl;		
	}
};

int main()
{
	Student s1,s2,s3,s4,s5;
	s1.setDetails();
	s2.setDetails();
	s3.setDetails();
	s4.setDetails();
	s5.setDetails();
	
	s1.getDetails();
	s2.getDetails();
	s3.getDetails();
	s4.getDetails();
	s5.getDetails();
	
	return 0;

}