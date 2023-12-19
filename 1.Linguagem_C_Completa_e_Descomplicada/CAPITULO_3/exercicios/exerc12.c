#include <stdio.h>
#include <stdlib.h>

/*
12) Leia a altura e o raio de um cilindro circular e 
imprima o volume desse cilindro.
O volume de um cilindro circular é 
calculado por meio da seguinte fórmula:
V = π * raio2 * altura, em que π = 3.141592
*/

int main(void) {
    const float PI = 3.141592;
    float raio = 0, veloc_do_cilindro = 0, altura = 0;

    printf("Digite a velocidade do raio do circulo: ");
    scanf("%f",&raio);

    printf("\nDigite a altura do circulo: ");
    scanf("%f",&altura);

    veloc_do_cilindro = (PI*(raio*raio)*altura);

    printf("O valor da velocidade do circulo: %.2f\n",veloc_do_cilindro);
    return (0);
}