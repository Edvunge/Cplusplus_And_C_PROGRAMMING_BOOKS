// IF e ELSE 
#include <iostream>
#include <string>


int main() {
	
	bool bFezSol, bCarroPronto, bSalarioDepositado;
	bool bAcesso;
	std::string senhaDeAcesso = "cmaismais";
	std::string senhaDigitada;
	
	std::cout << "Digite a senha de acesso: ";
	std::cin  >> senhaDigitada;
	
	// se a senha digitada pelo usuario e armazenada na variavel
	// senhaDigitada for igual a senha de acesso as instru��es
	// apos o if, serao executadas pois a condi��o foi verdadeira true 1
	if (senhaDigitada == senhaDeAcesso) {
		std::cout << "\nAcesso Permitido!" << "\n";
		// aqui aproveitamos para indicar que o acesso foi concedido
		// atraves de outra variavel booleana bAcesso
		bAcesso = true;
		system("PAUSE");
	} else {
		// se a condi��o for falsa ent�o as instru��es do else
		// ser�o executadas
		std::cout << "\n Acesso Negado!!!" << "\n";
		exit(0); //sai do programa, for�a o fechamento da aplica��o
		system("PAUSE");
	}	
	//
	return 0;
}

