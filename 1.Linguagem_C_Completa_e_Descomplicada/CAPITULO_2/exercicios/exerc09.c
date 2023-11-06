#include <stdio.h>
#include <stdlib.h>

/*
9) Faça um programa que leia dois valores do tipo float. 
Use um único comando de leitura para isso. 
Em seguida, imprima os valores lidos na ordem inversa em que eles
foram lidos.
*/

int main(void) {
    float num1, num2;

    printf("Digite dois valores: \n");
    scanf("%lf %lf",&num1,&num2);

    printf("num2 : %.1lf , num1 : %.1lf\n",num2,num1);
    system("pause");
    return 0;
}