#include <iostream>
using namespace std;

/*
2. Faça um programa em C que leia dois valores inteiros e efetue a adição. 
Caso o valor somado seja maior que 20, 
este deverá ser apresentado somando-se a ele mais 8, 
caso o valor somado seja menor ou igual a
20, este deverá ser apresentado subtraindo-se 5.
*/

int main() {
  	int valor1, valor2, soma;
  	
  	cout << "Digite o primeiro valor: " << "\n";
  	cin  >> valor1;
  	
  	cout << "Digite o segundo valor: " << "\n";
  	cin  >> valor2;
  	
  	soma = valor1 + valor2;
  	
  	if(soma > 20){
  		soma += 8;
		  if(soma <= 20){
		  		soma -= 5;
		  		printf("O valor final: %d\n",soma);
		  }	
	}
  	cout << "";
  return 0;
}
