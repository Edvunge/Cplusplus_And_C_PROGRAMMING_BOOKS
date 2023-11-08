#include <iostream>
using namespace std;

/*
14. Faça um programa em C que leia a base e a altura de um retângulo e mostre o perímetro
2*(base + altura) e a área (base * altura).
*/

int main() {
  	float base, altura, perimetro, area;
  	
  	cout << "Digite o valor da base: ";
	cin  >> base;
	
	cout << "Digite o valor da altura: ";
	cin  >> altura;  	
  	
  	perimetro = 2*(base + altura);
  	
	area = (base * altura);
	
	cout << "O valor do perimetro: " << perimetro << "\n" << "O valor da area: " << area << "\n";
  return 0;
}
