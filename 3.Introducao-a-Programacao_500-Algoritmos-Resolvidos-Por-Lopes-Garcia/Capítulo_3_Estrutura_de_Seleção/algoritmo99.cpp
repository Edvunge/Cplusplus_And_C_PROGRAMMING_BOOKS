#include <iostream>
using namespace std;

/*
9. Fa�a um programa em C que permita ler o ano de nascimento da pessoa e como ano atual. 
O programa deve imprimir a idade da pessoa. 
N�o se esque�a de verificar se o ano de nascimento informado � v�lido.
*/

int main() {
	int anoNascimento, anoActual, idade;
	
  	cout << "Informe o ano do nascimento: ";
  	cin  >> anoNascimento;
  	
  	cout << "Informe o ano actual: ";
  	cin  >> anoActual;
  	
  	if(anoActual < anoNascimento) {
  		cout << "impossivel calcular";
	} else {
		idade = anoActual - anoNascimento;
  		cout << "a sua idade: " << idade;
  	}
  return 0;
}
