#include <stdio.h>
#include <stdlib.h>

/*
15) Escreva um programa que leia três variáveis: 
        char, int e float. Em seguida, imprimaas
    de três maneiras diferentes: 
        separadas por espaços, por uma tabulação horizontal e
    uma em cada linha.
*/

int main(void) {
    char c;
    int num;
    float peso;

    printf("Digite: caracter, numero, peso");
    scanf("%c %d %f",&c,&num,&peso);

    printf("Caractere: %c, numero: %d , peso: %.1f\n",c,num,peso);
    printf("Caractere: %c\t, numero: %d\t , peso: %.1f\t",c,num,peso);
    printf("\nCaractere: %c\n, numero: %d\n , peso: %.1f\n",c,num,peso);
    return 0;
}