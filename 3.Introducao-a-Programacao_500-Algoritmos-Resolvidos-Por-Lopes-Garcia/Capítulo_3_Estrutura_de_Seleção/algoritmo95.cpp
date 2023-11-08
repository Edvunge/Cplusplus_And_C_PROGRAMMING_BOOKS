#include <iostream>
using namespace std;

// 5. Faça um programa em C que leia um número e informe se ele é divisível por 3 e por 7.

int main() {
  	int num;
  	
  	cout << "Digite um numero: ";
  	cin  >> num;
  	
	if( (num % 3 == 0 ) && (num % 7 == 0) ) {
  		printf("e divisivel por 3 e 7\n");	
	}
	
  return 0;
}
