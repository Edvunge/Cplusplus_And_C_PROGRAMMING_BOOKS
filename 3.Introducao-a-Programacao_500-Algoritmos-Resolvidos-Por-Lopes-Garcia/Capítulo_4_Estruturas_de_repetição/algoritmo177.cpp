#include <iostream>
using namespace std;

// algoritmo177 - Imprimir os m�ltiplos de 5, no intervalo de 1 at� 500.


int main() {
  	for(int i = 1; i <= 500; i++) {
  		if(i % 5 == 0) {
  			cout << " " << i << " ";	
		}	
	}
  return 0;
}
