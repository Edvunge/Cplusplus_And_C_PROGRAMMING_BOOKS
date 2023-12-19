#include <stdio.h>
#include <stdlib.h>

/*
11) Leia o valor do raio de um círculo. 
    Calcule e imprima a área do círculo correspondente.
    A área do círculo é A = π * raio2, sendo π = 3.141592.
*/

int main(void) {
    const float PI = 3.141592;
    float raio = 0, area = 0;

    printf("Digite o valor do raio do circulo: ");
    scanf("%f",&raio);

    area = (PI*(raio*raio));

    printf("O valor da area do circulo: %.2f\n",area);
    return (0);
}