#include <iostream>
using namespace std;


/*
6. Fa�a um programa em C que leia um n�mero inteiro e mostre o seu antecessor e o seu
sucessor.
*/

int main() {
	int num, antecessor, sucessor;
	
  	cout << "Digite um valor: ";
  	cin  >> num;
  	
  	antecessor = num - 1;
  	sucessor   = num + 1;
  	
  	cout << "O antecessor e: " << antecessor << "\n";
  	cout << "O sucessor e: " << sucessor << "\n";
  return 0;
}
