#include <iostream>
using namespace std;

// 9. Fa�a um programa em C que leia um n�mero real e mostre 1/4 deste n�mero. 

int main() {
    float num, quartaParte;
  	
	cout << "Digite um numero: \n";
	cin  >> num;
	
	quartaParte = (num/4);
	
	cout << " a quarta parte " << num << " e " << quartaParte;
  return 0;
}
