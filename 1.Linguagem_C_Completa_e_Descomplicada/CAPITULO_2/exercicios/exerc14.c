#include <stdio.h>
#include <stdlib.h>

/*
14) Faça um programa que leia três caracteres do tipo char e 
        depois os imprima um em cada linha. 
        Use um único comando printf() para isso.
*/

int main(void) {
    char constante, letra, digito;

    printf("Digite tres caracteres: \n");
    scanf("%c %c %c",&constante,&letra,&digito);
    
    printf("Os caracteres: %c\n , %c\n , %c\n",constante,letra,digito);
    return 0;
}