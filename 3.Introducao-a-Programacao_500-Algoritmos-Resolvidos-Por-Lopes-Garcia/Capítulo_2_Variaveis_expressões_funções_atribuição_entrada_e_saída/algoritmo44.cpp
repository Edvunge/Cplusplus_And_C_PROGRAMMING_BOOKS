#include <iostream>
using namespace std;

/*
16. Fa�a um programa em C que calcule o reajuste do sal�rio de um funcion�rio. 
Para isso, o programa dever� ler o sal�rio atual do funcion�rio 
e ler a percentagem de reajuste. 
No final mostrar o valor do novo sal�rio.
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
