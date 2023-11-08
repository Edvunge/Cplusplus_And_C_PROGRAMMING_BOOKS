#include <iostream>
using namespace std;

/*
4. Faça um programa que leia um número e informe se ele é ou não divisível por 5. 
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
