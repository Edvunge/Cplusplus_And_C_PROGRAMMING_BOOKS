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
	// senhaDigitada for igual a senha de acesso as instruções
	// apos o if, serao executadas pois a condição foi verdadeira true 1
	if (senhaDigitada == senhaDeAcesso) {
		std::cout << "\nAcesso Permitido!" << "\n";
		// aqui aproveitamos para indicar que o acesso foi concedido
		// atraves de outra variavel booleana bAcesso
		bAcesso = true;
		system("PAUSE");
	} else {
		// se a condição for falsa então as instruções do else
		// serão executadas
		std::cout << "\n Acesso Negado!!!" << "\n";
		exit(0); //sai do programa, força o fechamento da aplicação
		system("PAUSE");
	}	
	//
	return 0;
}

