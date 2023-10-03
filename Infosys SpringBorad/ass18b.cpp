/*
Question 2: Write a program in C to copy a file in another name.
Assume that the content of the file test.txt is:
test line 1
test line 2
test line 3
test line 4
test line 5
Test Data:
Input the source file name: test.txt
Input the new file name: test1.txt
Expected Output:
The file test.txt copied successfully in the file test1.txt.
If you read the new file you will see the content of the file:
test line 1
test line 2
test line 3
test line 4
test line 5
***
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fout;
    string line;
    fout.open("new.txt");
    cout<<"Enter Input:";
    while(fout){
        getline(cin,line);
        if(line == "-1"){
            break;
        }
        fout<<line<<endl;

    }
    fout.close();
    return 0;
}