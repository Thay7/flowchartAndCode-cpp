#include <iostream>
using namespace std;
int main () {

int A, B, C, resultado;

cout << "Digite o valor de A: \n";
cin >> A;
cout << "Digite o valor de B: \n";
cin >> B;
cout << "Digite o valor de C: \n";
cin >> C;

resultado = A+B+C;

if (resultado >= 100) {

cout << "O resultado da soma é: "<<resultado;

} else {

cout << "O resultado está abaixo do valor permitido!";
}}
