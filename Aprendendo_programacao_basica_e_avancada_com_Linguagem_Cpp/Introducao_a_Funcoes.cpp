#include <iostream>
// fun��es: 
// o que a fun�ao vai retornar?
// tipo de retorno da fun��o
int somarUmNumero(int numero, int numeroSomado) {
	int somaDosNumeros;
	somaDosNumeros = numero + numeroSomado;
	return somaDosNumeros;
}

int main() {
	int numero, numeroSomado;
	std::cout << "Digite um numero: " << "\n";
	std::cin  >> numero;
	std::cout << "Digite o numero a ser somado: " << "\n";
	std::cin  >>- numeroSomado;
	std::cout << "A soma deste numero: " << numero << "com o numero:" <<
		numeroSomado << "sera: " << somarUmNumero(numero, numeroSomado);
	system("PAUSE");
	return 0;
}
// uma fun��o, � criar um trecho de codigo que 
// voce pode chamar quando voce quiser
//
//
// 
