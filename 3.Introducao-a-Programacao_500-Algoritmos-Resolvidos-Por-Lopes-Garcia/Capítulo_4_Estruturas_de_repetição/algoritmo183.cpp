#include <iostream>
using namespace std;

/*
algoritmo 183
Entrar com 10 n�meros e imprimir o quadrado de cada n�mero.
*/

int main() {
	int num, j;
  	for(j = 0; j <= 10; j++) {
  		cout <<"Digite o %d numero: \n" << j;
		cin  >> num;
		
		int quadrd = (num*num);
		printf("\nO quadrado de: %d ",num ,quadrd);	
	}
  return 0;
}
