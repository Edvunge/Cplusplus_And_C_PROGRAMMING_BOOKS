#include <iostream>
using namespace std;

// 1. Faça um programa em C que imprima o seu nome. 

/*int main(){
	cout << "Meu Nome: Edvaldo Vunge.";
	return 0;
}*/

/*
7. Faça um programa em C++ que leia o nome o endereço e o telefone de um cliente e
ao final, imprima esses dados.
*/

int main() {
	wchar_t nome = 'edvaldo', endereco = 'rua';
	unsigned long int numeroTelef = 932605657;
	
	cout << "Olá "               << nome        << "\n"; 
	cout << "O seu telefone:  "  << numeroTelef << "\n";
	cout << "O seu endereco e: " << endereco    << "\n";  
	return 0;
}


