#include <iostream> 
using namespace std;

int main()
{
int A, B, C, temp;

cout << "Numero 1: ";
cin >> A;

cout << "Numero 2: ";
cin >> B;

cout << "Numero 3: ";
cin >> C;

if(B > A){
temp = A;
A = B;
B = temp;
}

if(C > A){
temp = A;
A = C;
C = temp;
}

if(C > B){
temp = B;
B = C;
C = temp;
}

cout <<A<<" >= "<<B<<" >= "<<C;
}
