/*Operators

1. Arithmetic Operators: 

a. Binary

i.   +
ii.  -
iii. *
iv.  /
v.   %

b.Urinary

i. ++ Incrementer ++a(Pre Incrementar) a++(Post Incrementer)
ii. --Decrementer  --a(Pre Decrementar) a--(Post Decrementer)

2. Relational Operator:

a. == Equal to
b. != Not Equal to
c. > and >= Greater than and Greater than equal to
d. < and <= Less than and Less than equal to

3. Logical Opeators

i.   && (And)
ii.  || (OR)
iii. !  (Not)

4. Bitwise Operators

i.  & Binary AND
ii. | Binary OR
iii.^ Binary XOR
iv. ~ Binary Ones Complement
v.  <<Binary Left Shift
vi. >>Binary Right Shift

5. Assignment Operators

i.  = 
ii. +=
iii.-=
iv. *=
v.  /=

*/

#include <iostream>
using namespace std;

int main()
{
    int i=0,j=2,k;
    k=i+j+i++ + j++ + ++i + ++j;
//    0 2 0     2       2     4
    cout<<k;
    return 0;    
    
}