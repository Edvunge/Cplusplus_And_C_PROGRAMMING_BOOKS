#include <iostream>
using namespace std;

// 8. Fa�a um programa em C que leia dois n�meros inteiros e mostre a subtra��o deles.

int main() {
  	int num1, num2;
  	
	cout << "Digite o primeiro numero: \n";
	cin  >> num1;
	
	cout << "Digite o segundo numero: \n";
	cin  >> num2;
	
	int subtract = num1 - num2;
	cout << num1 << "-" << num2 << " = " << subtract;
  return 0;
}
