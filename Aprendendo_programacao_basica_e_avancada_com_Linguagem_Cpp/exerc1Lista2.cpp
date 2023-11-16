#include <iostream>
using namespace std;

/*
Desenvolva um programa em C++ que:

- Declare uma variável do tipo inteiro e inicialize ela com algum valor do tipo inteiro
	
- Declare uma variável do tipo float e 
	inicialize ela com algum valor do tipo ponto flutuante (real)
	
- Declare uma variável do tipo double e 
	inicialize ela com algum valor do tipo ponto flutuante (real) de dupla precisão (double)
	
- Declare uma variável do tipo char e inicialize ela com algum valor do tipo caractere

Depois coloque na tela para cada variável:

O Valor da variável

Tamanho da Variável

O Endereço de memória da Variável
*/

int main(void){
	
	int           valor = 15;
	float         valorReal = 12.34f;
	float         numeroReal = 3.2f;
	double        doubleValue = 7.4;
	char          caractere = 'e';
	char          letra = 'a';
	int           idade = 28; 
	short int     numeroDaSorte = 18;
	long int      numeroDoAluno = 2023401;
	float         altura = 1.89f;
	double        peso = 100.0;
	wchar_t       cadeiaDeCaractere = 'nvalores';
	
	cout << "Size of char : "        << sizeof(letra)                 << "\n";
   	cout << "Size of int : "         << sizeof(idade)                 << "\n";
   	cout << "Size of short int : "   << sizeof(numeroDoAluno)         << "\n";
   	cout << "Size of long int : "    << sizeof(numeroDoAluno)         << "\n";
   	cout << "Size of float : "       << sizeof(altura)                << "\n";
   	cout << "Size of double : "      << sizeof(peso)                  << "\n";
   	cout << "Size of wchar_t : "     << sizeof(cadeiaDeCaractere)     << "\n";
	
	
	
	// variavel: valor
    cout << "Digite o valor da variável: "                              << valor            << "\n";
    cout << "Digite o tamanho da variável: "                            << sizeof(valor)    << "\n";
    cout << "Digite o endereço de memória da variável: "                << &valor           << "\n";
	cout << "\n";
    
    // variavel: valor real
	cout << "Digite o valor da variável: "                              << valorReal        << "\n";
    cout << "Digite o tamanho da variável: " << sizeof(valorReal)       << "Bytes "         << "\n";
    cout << "Digite o endereço de memória da variável: "                << &valorReal       << "\n";
	cout << "\n";
	
	// variavel: numero real	
	cout << "Digite o valor da variável: "                              << numeroReal       << "\n";
    cout << "Digite o tamanho da variável: " << sizeof(numeroReal)      << "Bytes "         << "\n";
    cout << "Digite o endereço de memória da variável: "                << &numeroReal      << "\n";
	cout << "\n";
	
	// variavel: double value
	cout << "Digite o valor da variável: "                              << doubleValue      << "\n";
    cout << "Digite o tamanho da variável: " << sizeof(doubleValue)     << "Bytes "         << "\n";
    cout << "Digite o endereço de memória da variável: "                << &doubleValue     << "\n";
	cout << "\n";
	
	// variavel: caractere
    cout << "Digite o valor da variável: "                              << caractere        << "\n";
    cout << "Digite o tamanho da variável: " << sizeof(caractere)       << "Bytes "         << "\n";
    cout << "Digite o endereço de memória da variável: " << (void *)    &caractere          << "\n";
	cout << "\n";
	
	system("PAUSE");
	return 0;
}
