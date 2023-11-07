#include <iostream>
using namespace std;

/*
11. Faça um programa em C que leia dois números reais e calcule as quatro operações básicas
entre estes dois números, adição, subtração, multiplicação e divisão. 
No final, o programa deve mostrar os resultados dos cálculos.
*/

int main() {
	float num1, num2;
	
  	cout << "Digite o primeiro valor: ";
  	cin  >> num1;
  	
  	cout << "Digite o segundo valor: ";
  	cin  >> num2;
  	
  	cout << "o valor da soma: "          << num1 + num2 << "\n";
  	cout << "o valor da subtracao: "     << num1 - num2 << "\n";
  	cout << "o valor da multiplicacao: " << num1 * num2 << "\n";
  	cout << "o valor da divisao: "       << num1 / num2 << "\n";
  return 0;
}
