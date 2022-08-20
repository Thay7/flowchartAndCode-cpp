#include <iostream>
using namespace std;
int main () {

int x, resultado; 

cout << "Digite um número: \n";
cin >> x;

resultado = x*2;

if (resultado > 30) {

cout << "O resultado da multiplicação de " <<x<< " por 2 é: " << resultado;

} else {

cout << "O resultado está abaixo do permitido!";

}


}
