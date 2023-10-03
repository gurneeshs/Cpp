/*
Modify the starter code to do the following operations:

It should accept the numerator and denominator from the user within a loop until the user says he wants to quit

If the numerator or denominator is not a positive number, it should throw an exception that should be caught and handled within main ()

The division operation should be performed in a separate function namely divide(int, int) and that function should handle the Division by Zero exception

The program should continue its execution even when there is Division by Zero exception. That is it should continue accepting the next set of numerator and denominator.

The main() should be able to handle any type of exception (unpredicted – of generic type)

Note : Try executing the code in your own compiler to test for different inputs and get the desired output.

Starter Code:
*/
#include <iostream>
using namespace std;

int divide(int num, int den){
        try {
                if ( 0 == den) {
                        throw 10;
                }
                int iQuotient= num/den;
                cout << "The Quotient is = " << iQuotient << endl;
        }
        catch(int iException) {
             cout << "Program has found  Division by Zero Exception" << endl;
        }
}
int main (int argc, char** argv) {
        int ch=1;
        while(ch){
                int num, den;
                cout<<"Enter Numerator:"<<endl;
                cin>>num;
                cout<<"Enter Denominator:"<<endl;
                cin>>den;
                divide(num,den);       
                cout << "********** Program Terminated–Normally ***** "<< endl;
                cout<<"Press 1 to continue or 0 to stop";
                cin>>ch;

        }
return 0;
}
