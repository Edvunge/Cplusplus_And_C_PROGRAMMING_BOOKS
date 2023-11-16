#include <iostream>
using namespace std;
/*
9. Faça um programa em C++ que leia um número real 
e imprima ¼ deste número.
*/

int main() {
	float num, umQuarto;
	cout << "Digite um numero";
	cin  >> num;
	
	umQuarto = (num/4);
	
	printf("o resultado: %.2f",umQuarto);
	return 0;
}
