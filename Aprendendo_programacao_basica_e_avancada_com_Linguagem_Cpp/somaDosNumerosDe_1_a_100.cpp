/*
Crie um programa que mostre na tela o resultado 
da soma dos numeros de 1 a 100;
*/
#include <iostream>
using namespace std;

int main() {
	int soma;
	for(int i = 1; i <= 100; i++){
		soma += i;
	}
	cout << "a soma dos numeros de 1 a 100 =  " << soma << "\n";
	return 0;
}
