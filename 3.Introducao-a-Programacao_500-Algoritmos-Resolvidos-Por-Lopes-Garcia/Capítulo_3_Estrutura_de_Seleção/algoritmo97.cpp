#include <iostream>
using namespace std;

/*
7. Faça um programa em C que leia um número e indique 
se o número está compreendido entre 20 e 50 ou não.
*/

int main() {
  	int num;
  	
  	cout << "Digite um valor: \n";
  	cin  >> num;
  	
  	if(num >= 20 && num <= 50) {
  		cout << "numero compreendido entre 20 e 50\n";	
	} else {
		cout << "numero nao compreendido entre 20 e 50\n";
	}
	cout << "";
  return 0;
}
