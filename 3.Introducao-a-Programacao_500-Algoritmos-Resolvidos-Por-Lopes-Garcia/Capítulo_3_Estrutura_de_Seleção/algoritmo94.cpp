#include <iostream>
using namespace std;

/*
4. Fa�a um programa que leia um n�mero e informe se ele � ou n�o divis�vel por 5. 
*/

int main() {
  	int num;
  	
  	cout << "Digite um valor: \n";
  	cin  >> num;
  	
  	if(num % 5 == 0) {
  		cout << "e divisivel por 5 \n";	
	}
  return 0;
}
