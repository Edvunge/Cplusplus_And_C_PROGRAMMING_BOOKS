#include <iostream>
using namespace std;
/*
9. Fa�a um programa em C++ que leia um n�mero real 
e imprima � deste n�mero.
*/

int main() {
	float num, umQuarto;
	cout << "Digite um numero";
	cin  >> num;
	
	umQuarto = (num/4);
	
	printf("o resultado: %.2f",umQuarto);
	return 0;
}
