#include <iostream>
using namespace std;

/*
17. Fa�a um programa em C que calcule a convers�o entre graus cent�grados e Fahrenheit.
Para isso, leia o valor em cent�grados e calcule com base na f�rmula F= (9*C+160) / 5. Ap�s
calcular o programa deve mostrar o resultado da convers�o.
Em que:
	
	� F = Graus em Fahrenheit
	� C = Graus cent�grados
*/

int main() {
	float fahrenheit, centigrados, conversao;
	
	cout << "\nDigite o valor em fahrenheit: ";
	cin >> fahrenheit;
	
	cout << "\nDigite o valor em centigrados: ";
	cin >> centigrados;
	
	conversao = (9 * centigrados + 160) /5;
	
  	cout << "O valor em fahrenheit: " << conversao;
  return 0;
}
