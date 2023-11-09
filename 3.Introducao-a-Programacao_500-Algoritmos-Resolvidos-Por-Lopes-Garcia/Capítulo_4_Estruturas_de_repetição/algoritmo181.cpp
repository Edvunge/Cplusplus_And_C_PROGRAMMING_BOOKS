#include <iostream>
using namespace std;

/*
algoritmo 181
Criar um algoritmo que imprima todos os numeros de 1 ate 100 e a soma deles
*/

int main() {
	int soma, i;
  	for (i = 1; i <= 100; i++) {
  		soma += i;	
	}
	cout << " " << soma << " ";
  return 0;
}
