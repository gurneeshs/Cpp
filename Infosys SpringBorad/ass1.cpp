/*
Write a C++ program to read an amount (integer value) and break the amount into smallest possible number of bank notes.

Input:
375


Expected Output:
There are:
3 Note(s) of 100.00
1 Note(s) of 50.00
1 Note(s) of 20.00
0 Note(s) of 10.00
1 Note(s) of 5.00
*/
#include <iostream>
using namespace std;

int main(){
    cout<<"Enter Amount";
    int amt;
    cin>>amt;

    int hnd,ffty,twnty,ten,five;

    hnd = amt/100;
    amt = amt%100;

    ffty = amt/50;
    amt = amt%50;

    twnty = amt/20;
    amt = amt%20;

    ten = amt/10;
    amt = amt%10;
     
    five = amt/5;
    amt = amt%5;

    cout<<"Notes of 100:"<<hnd<<endl;
    cout<<"Notes of 50:"<<ffty<<endl;
    cout<<"Notes of 20:"<<twnty<<endl;
    cout<<"Notes of 10:"<<ten<<endl;
    cout<<"Notes of 5:"<<five<<endl;

    return 0;
}