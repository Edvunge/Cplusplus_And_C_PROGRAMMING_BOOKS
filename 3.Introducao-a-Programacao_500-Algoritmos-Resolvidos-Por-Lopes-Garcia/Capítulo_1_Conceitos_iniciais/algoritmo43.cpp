#include <iostream>
using namespace std;

/*
15. Faça um programa em C que leia o valor de um produto, a percentagem do desconto desejado
e mostre o valor do desconto e o valor do produto subtraindo o desconto.
*/

int main() {
	float produto, percentagem, desconto;
	
  	cout << "Digite o valor do produto: ";
  	cin  >> produto;
  	
  	cout << "Digite o valor do desconto desejado: ";
  	cin  >> desconto;
  	
  	desconto = (produto*desconto)/100;
  	
  	produto -= desconto;
	   
  	cout << "Valor final do produto: " << produto;
  return 0;
}
