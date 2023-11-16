#include <iostream>
using namespace std;

/*
Desenvolva um programa em C++ que:

- Declare uma vari�vel do tipo inteiro e inicialize ela com algum valor do tipo inteiro
	
- Declare uma vari�vel do tipo float e 
	inicialize ela com algum valor do tipo ponto flutuante (real)
	
- Declare uma vari�vel do tipo double e 
	inicialize ela com algum valor do tipo ponto flutuante (real) de dupla precis�o (double)
	
- Declare uma vari�vel do tipo char e inicialize ela com algum valor do tipo caractere

Depois coloque na tela para cada vari�vel:

O Valor da vari�vel

Tamanho da Vari�vel

O Endere�o de mem�ria da Vari�vel
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
    cout << "Digite o valor da vari�vel: "                              << valor            << "\n";
    cout << "Digite o tamanho da vari�vel: "                            << sizeof(valor)    << "\n";
    cout << "Digite o endere�o de mem�ria da vari�vel: "                << &valor           << "\n";
	cout << "\n";
    
    // variavel: valor real
	cout << "Digite o valor da vari�vel: "                              << valorReal        << "\n";
    cout << "Digite o tamanho da vari�vel: " << sizeof(valorReal)       << "Bytes "         << "\n";
    cout << "Digite o endere�o de mem�ria da vari�vel: "                << &valorReal       << "\n";
	cout << "\n";
	
	// variavel: numero real	
	cout << "Digite o valor da vari�vel: "                              << numeroReal       << "\n";
    cout << "Digite o tamanho da vari�vel: " << sizeof(numeroReal)      << "Bytes "         << "\n";
    cout << "Digite o endere�o de mem�ria da vari�vel: "                << &numeroReal      << "\n";
	cout << "\n";
	
	// variavel: double value
	cout << "Digite o valor da vari�vel: "                              << doubleValue      << "\n";
    cout << "Digite o tamanho da vari�vel: " << sizeof(doubleValue)     << "Bytes "         << "\n";
    cout << "Digite o endere�o de mem�ria da vari�vel: "                << &doubleValue     << "\n";
	cout << "\n";
	
	// variavel: caractere
    cout << "Digite o valor da vari�vel: "                              << caractere        << "\n";
    cout << "Digite o tamanho da vari�vel: " << sizeof(caractere)       << "Bytes "         << "\n";
    cout << "Digite o endere�o de mem�ria da vari�vel: " << (void *)    &caractere          << "\n";
	cout << "\n";
	
	system("PAUSE");
	return 0;
}
