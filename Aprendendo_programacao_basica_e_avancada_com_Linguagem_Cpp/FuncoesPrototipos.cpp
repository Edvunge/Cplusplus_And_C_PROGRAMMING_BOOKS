#include <iostream>

// Podemos informar ao compilador que a fun��o existe
// e que iremos declarar ela posteriormente
// isso � feito atrav�s dos pr�totipos das fun��es
// coloque apenas o cabe�alho da fun��o terminado com ;
float soma(float num1, float num2);

// main j� � uma fun��o
// observe o tipo de retorno int
// o nome � main e ela n�o recebe parametros neste exemplo
// (podem existir argumentos de linha de comando que ser�o enviados 
// a dois parametros da fun��o main)

int main() {
	
	// a execu��o do programa � realizada de cima para baixo, desta forma
	// o compilador ainda n�o sabe da existencia da fun��o soma, 
	// antes a declara��o est� embaixo e ocorre erro, pois o compilador
	// n�o sabe ainda quem � e onde est� declarada a fun��o soma.
	// tudo isso porque � TOP-DOWN
	std::cout << soma(100, 500) << "\n";
	system("PAUSE");
	return 0;
}

float soma(float num1, float num2){
	return (num1 + num2);
}
