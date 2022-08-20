#include <iostream>
#include <math.h>
using namespace std; 

int main () {

float A, B, C, delta, x1, x2;
cout << "Informe o primeiro valor: \n";
cin >> A;
cout << "Informe o segundo valor: \n";
cin >> B;
cout << "Informe o terceiro valor: \n";
cin >> C;

if (A!=0 && B!=0 && C!=0){
 
delta = (B*B)-4*A*C;

if (delta==0) {

x1 = (-B+sqrt(delta))/(2*A);

cout << "Delta igual a 0!\n";
cout << "As duas raizes são iguas a " <<x1;

} else if (delta>0) {

x1 = (-B+sqrt(delta))/2*A;
x2 = (-B-sqrt(delta))/2*A;

cout << "Delta maior que 0!\n";
cout << "Raiz 1 = " <<x1<< "\nRaiz 2 = " <<x2;

} else {

cout << "Sem raízes reais, pois delta é menor que 0.";

}} else {
cout << "É necessário que todos os valores sejam maiores que 0.";

}}
