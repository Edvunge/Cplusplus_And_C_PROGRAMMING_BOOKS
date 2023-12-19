#include <stdio.h>
#include <stdlib.h>

/*
14) Faça um programa que converta uma letra 
    maiúscula em letra minúscula. 
    Use a tabela ASCII para isso.
*/
int main() {
    int numero, digito1, digito2, digito3;

    // Solicitar ao usuário que insira um número inteiro de três dígitos
    printf("Digite um numero inteiro de tres digitos: ");
    scanf("%d", &numero);

    // Verificar se o número tem três dígitos
    if (numero >= 100 && numero <= 999) {
        // Extrair os dígitos
        digito1 = numero % 10;
        digito2 = (numero / 10) % 10;
        digito3 = numero / 100;

        // Calcular e exibir o número invertido
        int numeroInvertido = digito1 * 100 + digito2 * 10 + digito3;
        printf("Numero invertido: %d\n", numeroInvertido);
    } else {
        // Caso a entrada não seja um número de três dígitos
        printf("Por favor, insira um numero de tres digitos valido.\n");
    }

    return 0;
}
