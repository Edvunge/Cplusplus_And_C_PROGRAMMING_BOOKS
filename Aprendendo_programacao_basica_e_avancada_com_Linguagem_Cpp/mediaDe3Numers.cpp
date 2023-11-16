#include <iostream>
using namespace std;
/*
10. Faça um programa em C que leia três números reais 
e calcule a média aritmética destes números. 
Ao final, o programa deve imprimir o resultado do cálculo.
*/

int main() {
	float num1, num2, num3, media;
	
	cout << "Digite o primeiro numero: ";
	cin  >> num1;
	
	cout << "Digite o segundo numero: ";
	cin  >> num2;
	
	cout << "Digite o terceiro numero: ";
	cin  >> num3;
	
	media = (num1 + num2 + num3)/3;
	cout << "A Media: " << media << "\n";
	return 0;
}
