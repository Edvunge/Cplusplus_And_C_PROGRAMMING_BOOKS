#include <iostream>
using namespace std;

// 9. Faça um programa em C que leia um número real e mostre 1/4 deste número. 

int main() {
    float num, quartaParte;
  	
	cout << "Digite um numero: \n";
	cin  >> num;
	
	quartaParte = (num/4);
	
	cout << " a quarta parte " << num << " e " << quartaParte;
  return 0;
}
