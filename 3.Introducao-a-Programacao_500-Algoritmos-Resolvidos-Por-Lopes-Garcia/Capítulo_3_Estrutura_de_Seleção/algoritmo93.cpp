#include <iostream>
using namespace std;

/*
3. Faça um programa que leia um número e imprima uma das duas mensagens: 
"É múltiplo de 3"ou "Não é múltiplo de 3".
*/

int main() {
  	int num;
  	
  	cout << "Digite um valor: ";
  	cin >> num;
  	
  	if(num % 3 == 0) {
  		printf("e multiplo de 3");	
	} else {
		printf("Nao e multiplo de 3");
	}
  return 0;
}
