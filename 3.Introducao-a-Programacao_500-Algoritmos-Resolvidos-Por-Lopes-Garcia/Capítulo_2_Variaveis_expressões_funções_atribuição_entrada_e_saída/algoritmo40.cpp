#include <iostream>
using namespace std;

/*
12. Fa�a um programa em C que leia um n�mero real e calcule o quadrado deste n�mero. 
No final, o programa deve mostrar o resultado do c�lculo.
*/

int main() {
  	float num;
  	
  	cout << "Digite um numero: \n"; 
  	cin >> num;
  	
  	float quadrd = num * num;
	
  	cout << "\nO quadrado do numero e: " << quadrd;
  return 0;
}
