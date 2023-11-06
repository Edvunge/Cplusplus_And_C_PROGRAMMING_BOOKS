#include <stdio.h>
#include <stdlib.h>

/*
10) Elabore um programa que solicite 
ao usuário entrar com o valor do dia, mês e ano
(inteiros). 
Em seguida, imprima os valores lidos separados por uma barra (\).
*/

int main(void) {
    int dia, mes, ano;

    printf("Digite o dia, mes, e o ano: \n");
    scanf("%d %d %d",&dia,&mes,&ano);

    printf("%d\\%d\\%d",dia,mes,ano);
    return 0;
}