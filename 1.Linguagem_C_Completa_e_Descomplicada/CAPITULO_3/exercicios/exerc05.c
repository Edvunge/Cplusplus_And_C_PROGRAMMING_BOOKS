#include <stdio.h>
#include <stdlib.h>

/*
5) Faça um programa que calcule o ano de nascimento 
de uma pessoa a partir de sua idade e do ano atual.
*/

int main(void) {
    int anoNascimento = 0, idade = 0;
    const int ANO_ACTUAL = 2023;

    printf("Digite o ano de nascimento: \n");
    scanf("%d",&anoNascimento);

    idade = ANO_ACTUAL - anoNascimento;

    printf("a idade: %d\n",idade);
    return (0);
}