#include <iostream>
using namespace std;

/*
10. Fa�a um programa em C que leia tr�s n�meros reais e 
calcule a m�dia aritm�tica destes n�meros. 
No final, o programa deve mostrar o resultado do c�lculo.
*/

int main() {
	float num1, num2, num3, media;
		
  	cout << "Digite o primeiro valor: \n";
	cin  >> num1;
	
	cout << "Digite o segundo valor: \n";
	cin  >> num2;
	
	cout << "Digite o terceiro valor: \n";
	cin  >> num3;
	
	media = (num1 + num2 + num3)/3;
	cout << "\nO valor da media: " << media << "\n";  
  return 0;
}
