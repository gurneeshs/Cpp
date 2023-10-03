#include <iostream>
using namespace std;

int main(){
    try{
        throw 100;
    }
    catch(...){
        cout<<"default exception";
    }
    catch(int para){
        cout<<"int exception";
    }
    return 0;
}