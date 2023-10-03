/*Write a C++ Program which accepts a string from the user and determines its length and also determines if it is a palindrome. Use pointer notation to access the elements of the string.

Step 1: Declare a character type pointer variable and integers, iCount and iLen.

Step 2: Read value for string from keyboard

Step 3: Find the length of the string using strlen() as well as include the corresponding header file <string.h>

Step 4: Iterate the loop for len/2 times to compare the characters by extracting a character from left and at the same time a character from right

Step 5: Display whether the given string is a palindrome or not

 

Note : Try executing the code in your own compiler to test for different inputs and get the desired output.

Starter Code:
 */

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[100];
    int len=0, flag=1;

    cout<<"Enter the String:";
    cin>>str;
    len = strlen(str);

    int i = 0, j = len-1;
    while(i<j){
        if(str[i]!=str[j]){
            flag=0;
            break;
        }
        i++;
        j--;
    }
    cout<<"Length of String is"<<len<<endl;
    if(flag){
        cout<<"Given String is palindrome String";
    }
    else{
        cout<<"Given String is not palindrome String";
    }
    return 0;
}