#include <iostream>
using namespace std;

/*
Crie um programa em c++ que receba do usuario tres 
valores do tipo real(Ponto Flutuante)
e coloque na tela os tres valores e a media aritmetica 
destes valores

OBS: A media é calculada dividindo a soma dos valores pela
quantidade de valores neste caso a soma 
dos numeros digitados pelo usuario
*/

int main() {
	float num1, num2, num3, media;
	
	cout << "Digite o primeiro numero: ";
	cin  >> num1;
	
	cout << "Digite o segundo numero: ";
	cin  >> num2;
	
	cout << "Digite o terceiro numero: ";
	cin  >> num3;
	
	media = (num1+num2+num3)/3;
	
	cout << "Primeiro Numero: "   << num1  << "\n";
	cout << "Segundo Numero: "    << num2  << "\n";
	cout << "Terceiro Numero: "   << num3  << "\n";
	cout << "Numeros Digitados: " << num1 << "  " << num2 << "  " << num3 << "\n";
	cout << "O valor da media: "  << media << "\n";
	return 0;
}
