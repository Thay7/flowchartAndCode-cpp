#include <iostream>
using namespace std; 

int main () {

float N1,N2,N3,N4,MD1,MD2,NE;
cout << "Qual foi a primeira nota?\n";
cin >> N1;
cout << "Qual foi a segunda nota?\n";
cin >> N2;
cout << "Qual foi a terceira nota?\n";
cin >> N3;
cout << "Qual foi a quarta nota?\n";
cin >> N4;

MD1 = (N1+N2+N3+N4)/4;

if (MD1>=7) {

cout << "Aprovado!\nSua média foi: " <<MD1;

} else {

cout << "Sua média foi: " <<MD1<< "\nVocê não foi aprovado." " Informe a nota do exame para calcularmos uma nova média: \n";
cin >> NE;

MD2 = (NE+MD1)/2;

if (MD2>=5) {

cout << "Aprovado em exame!\nSua média foi: " <<MD2;

} else  {

cout << "Reprovado!\nSua média foi: " <<MD2;

}}};
