#include <iostream> 
#include <math.h>
using namespace std;
int main () {

int A, B, C, D, aux ;

cout << "Digite o valor de A: \n";
cin >> A;
cout << "Digite o valor de B: \n";
cin >> B;
cout << "Digite o valor de C: \n";
cin >> C;
cout << "Digite o valor de D: \n";
cin >> D;

if ((A%2==0) && (A%3==0)) {

cout << A<< ": é divisível por 3 e 4!\n";
} 

if ((B%2==0) && (B%3==0)) {

cout << B<< ": é divisível por 3 e 4!\n";
} 

if ((C%2==0) && (C%3==0)) {
cout << C<< ": é divisível por 3 e 4!\n";
} 

if ((D%2==0) && (D%3==0)) {

cout << D<< ": é divisível por 3 e 4!\n";
} 
}
