#include <iostream>
using namespace std;

// 5. Fa�a um programa em C que leia um n�mero e informe se ele � divis�vel por 3 e por 7.

int main() {
  	int num;
  	
  	cout << "Digite um numero: ";
  	cin  >> num;
  	
	if( (num % 3 == 0 ) && (num % 7 == 0) ) {
  		printf("e divisivel por 3 e 7\n");	
	}
	
  return 0;
}
