#include <iostream>
using namespace std;

template <typename T>
T max(T x, T y){
    return (x>y)?x:y;
}

int main(){
    cout<<max<int>(3.5)<<endl;
    cout<<max(3.0,5.0)<<endl;
    cout<<max(3,5.0)<<endl;
    return 0;
}