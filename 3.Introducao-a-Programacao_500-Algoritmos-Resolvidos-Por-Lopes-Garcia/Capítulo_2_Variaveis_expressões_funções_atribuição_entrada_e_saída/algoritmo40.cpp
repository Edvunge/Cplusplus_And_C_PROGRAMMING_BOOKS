#include <iostream>
using namespace std;

/*
12. Faça um programa em C que leia um número real e calcule o quadrado deste número. 
No final, o programa deve mostrar o resultado do cálculo.
*/

int main() {
  	float num;
  	
  	cout << "Digite um numero: \n"; 
  	cin >> num;
  	
  	float quadrd = num * num;
	
  	cout << "\nO quadrado do numero e: " << quadrd;
  return 0;
}
