#include <iostream>
using namespace std;

enum eColors{
    red,
    green,
    yellow
};

class Rectangle{
    eColors color;
    public:
        void Cube(eColors m_color){
            color =  m_color;
        }

    friend bool fnColorCmp(Rectangle);

};

class Circle{
    eColors color;
    public:
        void Cylinder(eColors m_color){
            color = m_color;
        }
    friend bool fnColorCmp(Circle);

};

bool fnColorCmp(Rectangle r, Circle c){
    if(r.color == c.color){
        return true;
    }
    else 
    {
        return false;
    }
}

int main(){

    return 0;
}