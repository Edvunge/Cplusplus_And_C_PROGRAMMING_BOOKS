/*
usando while loop faça: 
desenvolver um programa que coloque na tela os 
numrs impares de 0 a 50;
*/
#include <iostream>
using namespace std;

int main() {
	int i = 0;
	while(i <= 50){
		if(i % 2 != 0){
			cout << i << "  ";
		}
		i++;
	}
	return 0;
}
