#include <iostream>
using namespace std;

// 1. Fa�a um programa em C que imprima o seu nome. 

/*int main(){
	cout << "Meu Nome: Edvaldo Vunge.";
	return 0;
}*/

/*
7. Fa�a um programa em C++ que leia o nome o endere�o e o telefone de um cliente e
ao final, imprima esses dados.
*/

int main() {
	wchar_t nome = 'edvaldo', endereco = 'rua';
	unsigned long int numeroTelef = 932605657;
	
	cout << "Ol� "               << nome        << "\n"; 
	cout << "O seu telefone:  "  << numeroTelef << "\n";
	cout << "O seu endereco e: " << endereco    << "\n";  
	return 0;
}


