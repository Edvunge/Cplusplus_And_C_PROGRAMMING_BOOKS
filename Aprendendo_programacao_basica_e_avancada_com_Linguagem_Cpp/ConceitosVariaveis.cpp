#include <iostream>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int NumVidas = 5;
	int Pontuacao = 1350;
	std::cout << "*******INICIO DO JOGO************" << std::endl;
	std::cout << "vidas jogador: " << NumVidas << std::endl;
	std::cout << "Pontuacao: " << Pontuacao << std::endl;
	std::cout << "Endere�o que NumVidas Ocupa na Mem�ria RAM: " << &NumVidas << "\n";
	std::cout << "Endere�o que Pontua��o Ocupa na Mem�ria RAM: " << &Pontuacao << "\n";
	std::cout << "************************************" << std::endl;
	
	std::cout << "********DURANTE O JOGO**********" << std::endl;
	Pontuacao = Pontuacao + 150;
	NumVidas = NumVidas - 1;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontuacao: " << Pontuacao << std::endl;
	std::cout << "********************************" << std::endl;	

	return 0;
}
