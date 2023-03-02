#include <iostream>
using namespace std;
float area(float rad)
{
    return 3.14f*rad*rad;
}
int area(int l,int b)
{
    return l*b;
}
int area(int s)
{
	return s*s;
}
float area(float base,float height)
{
	float v=(base*height)/2;
	return v;
}
int main() {
    
    int a;float b;
    cout<<"Area of Circle";
    cout<<area(3.5f)<<endl;
    cout<<"Area of Rectangle";
    cout<<area(4,6)<<endl;
    cout<<"Area of Square";
    cout<<area(8)<<endl;
	cout<<"Area of Triangle";
	cout<<area(3.5f,5.5f);    
   
}