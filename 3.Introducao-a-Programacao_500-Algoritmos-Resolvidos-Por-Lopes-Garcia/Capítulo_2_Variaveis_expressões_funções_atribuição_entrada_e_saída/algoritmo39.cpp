#include <iostream>
using namespace std;

/*
11. Fa�a um programa em C que leia dois n�meros reais e calcule as quatro opera��es b�sicas
entre estes dois n�meros, adi��o, subtra��o, multiplica��o e divis�o. 
No final, o programa deve mostrar os resultados dos c�lculos.
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
