#include <iostream>
using namespace std;

/*
algoritmo 182
Entrar com 10 números e imprimir a metade de cada número.
*/

int main() {
  	for (int j = 1; j <= 10; j++) {
  		float metade =  (float) j / 2;
		  
		printf("\nMetade de: %.1f",metade); 	
	}
  return 0;
}
