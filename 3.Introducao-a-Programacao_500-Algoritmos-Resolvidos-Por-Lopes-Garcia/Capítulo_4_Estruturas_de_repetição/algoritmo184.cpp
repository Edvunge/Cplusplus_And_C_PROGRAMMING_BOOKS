#include <iostream>
#include <math.h>
using namespace std;

/*
algoritmo 184
Entrar com 8 n�meros e, para cada n�mero, imprimir o logaritmo desse n�mero
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
