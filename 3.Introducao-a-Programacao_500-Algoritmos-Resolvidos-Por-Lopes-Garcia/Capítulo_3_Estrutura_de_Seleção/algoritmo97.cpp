#include <iostream>
using namespace std;

/*
7. Fa�a um programa em C que leia um n�mero e indique 
se o n�mero est� compreendido entre 20 e 50 ou n�o.
*/

int main() {
  	int num;
  	
  	cout << "Digite um valor: \n";
  	cin  >> num;
  	
  	if(num >= 20 && num <= 50) {
  		cout << "numero compreendido entre 20 e 50\n";	
	} else {
		cout << "numero nao compreendido entre 20 e 50\n";
	}
	cout << "";
  return 0;
}
