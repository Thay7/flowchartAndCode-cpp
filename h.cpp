#include <iostream> 
#include <math.h>
using namespace std;
int main () {

int A, B, C, D, aux ;

cout << "Digite o valor 1: \n";
cin >> A;
cout << "Digite o valor 2: \n";
cin >> B;
cout << "Digite o valor 3: \n";
cin >> C;
cout << "Digite o valor 4: \n";
cin >> D;

if ((A%2==0) || (A%3==0)) {

cout << A<< ": é divisível por 3 e 4!\n";
} 

if ((B%2==0) || (B%3==0)) {

cout << B<< ": é divisível por 3 ou 4!\n";
} 

if ((C%2==0) || (C%3==0)) {
cout << C<< ": é divisível por 3 ou 4!\n";
} 

if ((D%2==0) || (D%3==0)) {

cout << D<< ": é divisível por 3 ou 4!\n";
} 
}
