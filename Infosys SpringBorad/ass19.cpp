/*Problem Description:

Execute the starter code by passing 2 string values as arguments to fnExchange().

If it throws any error, resolve it.

* Function fnExchange

* DESCRIPTION: To swap the content of two variables

* PARAMETERS:

*   T & rtVal1  – Reference to the first argument passed

*   T & rtVal2  – Reference to the second argument passed

* RETURNS: void

 

Note : Try executing the code in your own compiler to test for different inputs and get the desired output.

Starter Code:

#include <iostream>
using namespace std;
template <class X>
void fnExchange(X &rtVal1, X &rtVal2) {
    X rtTemp = rtVal1;
    rtVal1 = rtVal2;    
    rtVal2 = rtTemp;
}
int main (int argc, char**argv) {

    // Variable Declaration 
    int iData1 = 30, iData2 = 90;
    cout << “Integer Swapping “ << endl;
    cout << iData1 << iData2 << endl;
    fnExchange(iData1,iData2);    // swaps two integers
    cout << iData1 << iData2 << endl;
    cout << “Double Swapping “ << endl;
    double dAmt = 3939.20, dPay = 2009.32;
    cout << dAmt << dPay << endl;
    fnExchange(dAmt, dPay);    // swaps two doubles
    cout << dAmt << dPay << endl;

    // Return a success code back to OS
    return 0;
}
*/