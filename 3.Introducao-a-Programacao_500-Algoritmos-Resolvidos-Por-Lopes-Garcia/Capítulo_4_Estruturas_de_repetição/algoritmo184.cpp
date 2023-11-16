#include <iostream>
#include <math.h>
using namespace std;

/*
algoritmo 184
Entrar com 8 números e, para cada número, imprimir o logaritmo desse número
na base 10.
*/

int main() {
		int i = 0, num = 0;
		double logaritmo_xbase10 = 0.0;
		
  		for (i = 1; i <= 8; i++) {
  			printf("\nDigite o %d-numero: \n",i);
			scanf("%d",&num);
			
			logaritmo_xbase10 = log10(num);
			printf("\nO logaritmo %d eh %.2f\n",num ,logaritmo_xbase10);
		}
  return 0;
}
