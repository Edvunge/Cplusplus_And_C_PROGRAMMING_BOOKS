#include <iostream>
using namespace std;

// algoritmo177 - Imprimir os múltiplos de 5, no intervalo de 1 até 500.


int main() {
  	for(int i = 1; i <= 500; i++) {
  		if(i % 5 == 0) {
  			cout << " " << i << " ";	
		}	
	}
  return 0;
}
