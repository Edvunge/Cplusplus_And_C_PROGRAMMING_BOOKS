#include <iostream>
using namespace std;

/*
algoritmo 179
Criar um algoritmo que imprima os numeros pares no intervalo de 1 a 600
*/

int main() {
  	for (int i = 1; i <= 600; i++) {
  		if(i % 2 == 0) {
  			cout << " " << i << " ";	
		}
	}
  return 0;
}
