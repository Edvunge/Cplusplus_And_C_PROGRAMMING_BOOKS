#include <iostream>
#include <math.h>
using namespace std;

/*
algoritmo 186
Entrar com quatro n�meros e imprimir o cubo e a raiz c�bica de cada n�mero.
*/

int main() {
  		int i = 0, num = 0;
		float raizCubica = 0.0, cubo = 0.0;
		
  		for (i = 1; i <= 2; i++) {
  			printf("\nDigite o %d-numero: \n",i);
			scanf("%d",&num);
			
			cubo = (num* num * num);
			raizCubica = sqrt(num);
			printf("A raiz cubica de %d eh: %.2f.\n", num, raizCubica);
			printf("O cubo de %d eh: %.2f.\n", num, cubo);
		}
  return 0;
}
