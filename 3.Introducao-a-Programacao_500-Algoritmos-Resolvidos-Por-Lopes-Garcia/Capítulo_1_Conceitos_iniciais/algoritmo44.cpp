#include <iostream>
using namespace std;

/*
16. Faça um programa em C que calcule o reajuste do salário de um funcionário. 
Para isso, o programa deverá ler o salário atual do funcionário 
e ler a percentagem de reajuste. 
No final mostrar o valor do novo salário.
*/

int main() {
	float salario, reajuste, novoSalario;
	
  	cout << "Digite o valor do salario: \n";
  	cin  >> salario;
  	
  	cout << "Digite o valor do reajuste: ";
	cin  >> reajuste; 
  	
  	salario = (salario*reajuste)/100;
  	novoSalario = (salario + reajuste);
  	
  	cout << "O valor do novo salario: " << novoSalario;
  return 0;
}
