/*
Assignment: File Handling

Question 1: Write a program in C to Find the Number of Lines in a Text File.
Test Data: Input the file name to be opened: test.txt
Expected Output: The lines in the file test.txt are: 4
***
*/
#include <iostream>
using namespace std;
#include <fstream>

int main(){
    int count = 0;
    string line;
    ifstream fout("text.txt");
    while(getline(fout,line)){
        count++;
    }
    cout<<"Numbers of line in the file"<<count;
    return 0;

}