#include <iostream>
using namespace std;

/*
14. Fa�a um programa em C que leia a base e a altura de um ret�ngulo e mostre o per�metro
2*(base + altura) e a �rea (base * altura).
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
