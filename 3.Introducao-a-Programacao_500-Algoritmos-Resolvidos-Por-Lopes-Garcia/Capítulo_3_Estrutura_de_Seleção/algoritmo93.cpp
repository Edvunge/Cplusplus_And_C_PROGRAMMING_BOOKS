#include <iostream>
using namespace std;

/*
3. Fa�a um programa que leia um n�mero e imprima uma das duas mensagens: 
"� m�ltiplo de 3"ou "N�o � m�ltiplo de 3".
*/

int main() {
  	int num;
  	
  	cout << "Digite um valor: ";
  	cin >> num;
  	
  	if(num % 3 == 0) {
  		printf("e multiplo de 3");	
	} else {
		printf("Nao e multiplo de 3");
	}
  return 0;
}
