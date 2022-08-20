#include <iostream>
using namespace std; 

int main () {

float N1,N2,N3,N4,MD;

cout << "Qual foi a primeira nota?\n";
cin >> N1;
cout << "Qual foi a segunda nota?\n";
cin >> N2;
cout << "Qual foi a terceira nota?\n";
cin >> N3;
cout << "Qual foi a quarta nota?\n";
cin >> N4;

MD = (N1+N2+N3+N4)/4;

if (MD>=5) {

cout << "Aprovado!\nA média obtida foi: " <<MD;

} else {

cout << "Reprovado!/n A média obtida foi: " <<MD;

}}
