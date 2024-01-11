#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
7) Uma empresa vende o mesmo produto para 
quatro diferentes estados. Cada estado possui uma 
taxa diferente de imposto sobre o produto. 
Faça um programa em que o usuário entre com o valor 
e o estado de destino do produto e o programa
retorne o preço final do produto acrescido do imposto do 
estado em que ele será vendido. 
Se o estado digitado não for válido, mostrará uma mensagem de erro.

Estado      MG      SP     RJ       MS
Imposto     7%      12%    15%      8%
*/

int main(void) {
    float valorProduto = 0.0;
    float taxEstate_MG = 0.0; // 7
    float taxEstate_SP = 0.0; // 12
    float taxEstate_RJ = 0.0; // 15
    float taxEstate_MS = 0.0; // 8
    char estateName[5];
    float precoFinal = 0.0;

    printf("Digite o estado de destino: ");
    fgets(estateName, sizeof(estateName), stdin);
    estateName[strcspn(estateName, "\n")] = '\0'; // Remover o caractere de nova linha

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    if (strcmp(estateName, "MG") == 0 || strcmp(estateName, "mg") == 0) {
        taxEstate_MG = valorProduto * 0.07;
        precoFinal = valorProduto + taxEstate_MG;
        printf("O valor final já incluído as taxas é de: %.2f\n", precoFinal);
    } else if (strcmp(estateName, "sp") == 0 || strcmp(estateName, "SP") == 0) {
        taxEstate_SP = valorProduto * 0.12;
        precoFinal = valorProduto + taxEstate_SP;
        printf("O valor final já incluído as taxas é de: %.2f\n", precoFinal);
    } else if (strcmp(estateName, "rj") == 0 || strcmp(estateName, "RJ") == 0) {
        taxEstate_RJ = valorProduto * 0.15;
        precoFinal = valorProduto + taxEstate_RJ;
        printf("O valor final já incluído as taxas é de: %.2f\n", precoFinal);
    } else if (strcmp(estateName, "ms") == 0 || strcmp(estateName, "MS") == 0) {
        taxEstate_MS = valorProduto * 0.08;
        precoFinal = valorProduto + taxEstate_MS;
        printf("O valor final já incluído as taxas é de: %.2f\n", precoFinal);
    } else {
        printf("Erro: Estado Inválido.\n");
    }
    return (0);
}