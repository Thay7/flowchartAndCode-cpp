#include <iostream>
using namespace std;
int main () {

string nome, sexo, M, F, m, f;

cout << "Digite seu nome: ";
cin >> nome;

cout << "Digite seu sexo (F/M): ";
cin >> sexo;

if(sexo == "M"||sexo == "m") {

cout << "Ilmo. Sr. "<<nome;

} else if (sexo == "F"|| sexo == "f") {

cout << "Ilma. Sra. "<<nome;

} else {

cout << "Sexo informado inválido!";
}
}




