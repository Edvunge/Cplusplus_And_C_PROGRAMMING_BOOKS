// Usando Printf()
#include <iostream>
using namespace std;

// voce pode usar () para iniciar variaveis com valores literais
// {} é inicialização uniforme, permite tanto iniciar tanto valores
// literais (int, float, caractere, quanto valores escalares, 
// vetores, enums etc, )
int main() {
	int numeroInteiro = 12;
	float numeroReal = 34.56f;
	char caractere = 'c';
	// String é uma cadeia de caracteres, é um texto e deve estar
	// entre aspas duplas "texto da string"
	// para declarar uma string usamos std::string
	
	string Texto = "Texto da String";
	// %d indica que voce quer que seja colocada na string:
	// "valor numero inteiro = %d " o valor da variavel numeroInteiro
	printf("valor numeor inteiro = %d ", numeroInteiro);
	// %d é chamado de especificador de formato
	// cada tipo de dado tem um especificador de formato
	// printf é uma função que veio da linguagem C
	return 0;
}
