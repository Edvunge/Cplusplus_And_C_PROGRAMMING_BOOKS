// Operadores Relacionais e de Igualdade
#include <iostream>
using namespace std;

int main(){
	int num1, num2;
	bool 	comparacao1, comparacao2, 
			comparacao3, comparacao4, 
			comparacao5, comparacao6;
	
	cout << "Ddigite o primeiro numero: ";
	cin  >> num1;
	cout << "Numero1 = " << num1 << "\n";
	
	cout << "Ddigite o segundo numero: ";
	cin  >> num2;
	
	cout << "Numero2 = " << num2 << "\n";
	
	/* 
	= é comando de atribuição.
	== é operador de igualdade. verificar se um operando é 
	igual a outro operando.
	*/
	
	comparacao1 = (num1 == num2);
	comparacao2 = (num1 != num2);
	comparacao3 = (num1 > num2);
	comparacao4 = (num1 < num2);
	comparacao5 = (num1 >= num2);
	comparacao6 = (num1 <= num2);
	
	cout << "numero1 igual a numero2: "          << comparacao1 << "\n";
	cout << "numero1 diferente numero2: "        << comparacao2 << "\n";
	cout << "numero1 maior que numero2: "        << comparacao3 << "\n";
	cout << "numero1 menor que numero2: "        << comparacao4 << "\n";
	cout << "numero1 maior ou igual a numero2: " << comparacao5 << "\n";
	cout << "numero1 menor igual a numero2: "    << comparacao6 << "\n";
	system("PAUSE");
	return 0;
}
