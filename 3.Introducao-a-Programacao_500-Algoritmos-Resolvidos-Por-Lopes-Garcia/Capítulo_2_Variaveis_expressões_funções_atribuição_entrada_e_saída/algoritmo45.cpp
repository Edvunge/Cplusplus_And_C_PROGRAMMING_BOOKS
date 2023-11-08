#include <iostream>
using namespace std;

/*
17. Faça um programa em C que calcule a conversão entre graus centígrados e Fahrenheit.
Para isso, leia o valor em centígrados e calcule com base na fórmula F= (9*C+160) / 5. Após
calcular o programa deve mostrar o resultado da conversão.
Em que:
	
	• F = Graus em Fahrenheit
	• C = Graus centígrados
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
