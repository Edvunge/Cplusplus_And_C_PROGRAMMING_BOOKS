/*
8. Faça um programa em C++ que leia dois números inteiros e 
imprima a subtração deles.
*/
#include <iostream>
using namespace std;

int main(){
	int num1, num2, subtrt;
	
	cout << "Digite um numero: ";
	cin  >> num1;
	
	cout << "Digite um numero: ";
	cin  >> num2;
	
	if(num1 > num2) {
		subtrt = num1 - num2;
		printf("%d - %d = %d\n",num1 ,num2 ,subtrt);
	} else {
		subtrt = num2 - num1;
		printf("%d - %d = %d\n",num2 ,num1 ,subtrt);
	}
	return 0;
}
