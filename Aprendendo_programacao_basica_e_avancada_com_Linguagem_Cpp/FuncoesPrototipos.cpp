#include <iostream>

// Podemos informar ao compilador que a função existe
// e que iremos declarar ela posteriormente
// isso é feito através dos prótotipos das funções
// coloque apenas o cabeçalho da função terminado com ;
float soma(float num1, float num2);

// main já é uma função
// observe o tipo de retorno int
// o nome é main e ela não recebe parametros neste exemplo
// (podem existir argumentos de linha de comando que serão enviados 
// a dois parametros da função main)

int main() {
	
	// a execução do programa é realizada de cima para baixo, desta forma
	// o compilador ainda não sabe da existencia da função soma, 
	// antes a declaração está embaixo e ocorre erro, pois o compilador
	// não sabe ainda quem é e onde está declarada a função soma.
	// tudo isso porque é TOP-DOWN
	std::cout << soma(100, 500) << "\n";
	system("PAUSE");
	return 0;
}

float soma(float num1, float num2){
	return (num1 + num2);
}
