#include <stdio.h>
#include <stdlib.h>

/*
14) Faça um programa que converta uma letra 
    maiúscula em letra minúscula. 
    Use a tabela ASCII para isso.
*/

int main() {
    char letraMaiuscula, letraMinuscula;

    // Solicitar ao usuário que insira uma letra maiúscula
    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &letraMaiuscula);

    // Verificar se a entrada é uma letra maiúscula
    if (letraMaiuscula >= 'A' && letraMaiuscula <= 'Z') {
        // Converter para letra minúscula usando a tabela ASCII
        letraMinuscula = letraMaiuscula + ('a' - 'A');

        // Exibir o resultado
        printf("A letra minuscula correspondente e: %c\n", letraMinuscula);
    } else {
        // Caso a entrada não seja uma letra maiúscula
        printf("Por favor, insira uma letra maiuscula valida.\n");
    }

    return 0;
}
