#include <iostream>
#include <math.h>
using namespace std;

/*
algoritmo 185
Entrar com 15 números e imprimir a raiz quadrada de cada número.
*/

int main() {
		int i = 0, num = 0;
		float raiz = 0.0;
		
  		for (i = 1; i <= 15; i++) {
  			printf("\nDigite o %d-numero: \n",i);
			scanf("%d",&num);
			
			raiz = sqrt(num);
			printf("A raiz quadrada de %d eh: %.2f.\n", num, raiz);
		}
  return 0;
}

