/*
Write a program in C++ to sort an array using Pointer.

Input : First element will be the total no.of elements to store in the array and the following numbers will the elements of the array that needs to be sorted.

Output : Sorted array

Test Data :

5 25 45 89 15 82

Expected Output:

5 15 25 49 82 89
*/

#include <iostream>
using namespace std;

void bubbleSort(int* arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(*(arr+j)>*(arr+j+1)){
                int temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
    }
}
void printArray(int* arr, int n){
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<" "; 
    }
    cout<<endl;
}

int main(){
    int arr[] = {5,25,45,89,15,82};
    int* ptr = arr;
    printArray(ptr,6);
    bubbleSort(ptr,6);
    printArray(ptr,6);
    return 0;
}