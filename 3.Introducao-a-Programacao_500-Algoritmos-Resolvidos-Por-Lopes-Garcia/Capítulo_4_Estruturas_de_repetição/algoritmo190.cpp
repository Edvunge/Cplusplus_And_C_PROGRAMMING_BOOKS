#include <iostream>
using namespace std;


/*
algoritmo 190
Entrar com um nome, idade e sexo de 20 pessoas. Imprimir o nome se a pessoa for
do sexo masculino e tiver mais de 21 anos.

60dias uma vez por mes,6eur, 
*/

#include <iostream>
using namespace std;

int main() {
    int idade, num;
    char nome[50], sexo; 

    for (num = 1; num <= 2; num++) {  
        cout << "Digite o " << num << "º nome: " << endl;
        cin.getline(nome, 50); 
        
        cout << "Digite o sexo: (m/f)" << endl;
        cin >> sexo;
        
        cout << "Digite a sua idade" << endl;
        cin >> idade;
        
        if (sexo == 'm' && idade >= 21) {
            cout << "Nome: " << nome << endl; 
        }
    }

    return 0;
}

