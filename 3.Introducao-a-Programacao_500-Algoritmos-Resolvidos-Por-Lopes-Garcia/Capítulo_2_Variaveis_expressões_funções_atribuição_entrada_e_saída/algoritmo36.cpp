#include <iostream>
using namespace std;

// 8. Faça um programa em C que leia dois números inteiros e mostre a subtração deles.

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
