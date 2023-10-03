#include <iostream>
using namespace std;

int main(){
    int *pint;
    int **ppint1;
    int **ppint2;

    pint = (int*)malloc(sizeof(int));
    ppint1 = (int**)malloc(10*sizeof(int*));
    ppint2 = (int**)malloc(10*sizeof(int*));

    free(pint);
    free(ppint1);
    free(*ppint2);
    return 0;
}