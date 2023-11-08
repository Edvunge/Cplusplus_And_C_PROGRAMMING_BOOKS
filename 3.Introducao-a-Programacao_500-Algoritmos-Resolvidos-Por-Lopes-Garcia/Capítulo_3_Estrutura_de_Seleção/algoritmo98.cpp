#include <iostream>
using namespace std;

/*
8. Faça um programa que leia um número e imprima uma das mensagens: 
"Maior do que 20", "Igual a 20"ou "Menor do que 20".
*/

int main() {
	int num;
	
  	cout << "Digite um numero: \n";
  	cin  >> num;
  	
  	if(num > 20) {
  		cout << "Maior do que 20\n";	
	} else if(num == 20) {
		cout << "Igual a 20\n";
	} else {
		cout << "Menor do que 20\n";
	}
  return 0;
}
