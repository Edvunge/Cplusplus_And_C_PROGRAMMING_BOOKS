// Operadores Aritmeticos + - * /
#include <iostream>

int main() {
	float num1, num2, soma, subtrt, multiplic, divisao;
	
	std::cout << "Ddigite o primeiro numero: ";
	std::cin  >> num1;
	
	std::cout << "Ddigite o segundo numero: ";
	std::cin  >> num2;
	
	soma = num1 + num2;
	subtrt = num1 - num2;
	multiplic = num1 * num2;
	divisao = num1 / num2;
	
	std::cout << "A Soma  = " << soma << std::endl;
	std::cout << "A Subtracao  = " << subtrt << std::endl;
	std::cout << "A Multiplicacao  = " << multiplic << std::endl;
	std::cout << "A Divisao  = " << divisao << std::endl;
	return 0;
}
