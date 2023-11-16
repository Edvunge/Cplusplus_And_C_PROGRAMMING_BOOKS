// aula de constantes
#include <iostream>
using namespace std;


// Para usar #define precisa colocar aqui abaixo dos includes
#define NUM_VIDAS 10
// Obrserve que não tem ; no final!!

int main() {
	
	const int BONUS = 0;
	int TotalDeVidas;
	TotalDeVidas = NUM_VIDAS - 1;
	cout << "Total de Vidas: " << TotalDeVidas << "\n";
	cout << "Valor Constante NUM_VIDAS: " << NUM_VIDAS << "\n";
	cout << "Endereco de memoria de NUM_VIDAS: " << &NUM_VIDAS << "\n";
	system("PAUSE");
	return 0;
}
