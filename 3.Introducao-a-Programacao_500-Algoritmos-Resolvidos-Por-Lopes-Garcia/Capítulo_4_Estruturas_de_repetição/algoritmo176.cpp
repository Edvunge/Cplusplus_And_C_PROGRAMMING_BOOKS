#include <iostream>
using namespace std;

// algoritmo176 - Imprimir os 100 primeiros pares.

int main() {
  	for(int i = 0; i <= 100; i++) {
  		if(i % 2 == 0) {
  			cout << " " << i << " ";	
		}	
	}
  return 0;
}
