#include <stdio.h>
#include <stdlib.h>

/*
/*
10) A importância de R$780.000,00 
será dividida entre três ganhadores de um concurso, sendo que:
    
    i. O primeiro ganhador receberá 46% do total.
    ii. O segundo receberá 32% do total.
    iii. O terceiro receberá o restante.
    Calcule e imprima a quantia recebida por cada um dos ganhadores.

    s = ( desc X 5% ) / 100;
*/

int main(void) {
    float premioTotal = 780.000; 
    int   percentagemDo_1_ganhador = 46;
    int   percentagemDo_2_ganhador = 32;
    int   percentagemDo_3_ganhador = 22;
    float valorGanhoPelo_1_vencedor = 0.0;
    float valorGanhoPelo_2_vencedor = 0.0;
    float valorGanhoPelo_3_vencedor = 0.0;  


    valorGanhoPelo_1_vencedor = (premioTotal*percentagemDo_1_ganhador); 
    valorGanhoPelo_2_vencedor = (valorGanhoPelo_1_vencedor*percentagemDo_2_ganhador); 
    valorGanhoPelo_3_vencedor = (valorGanhoPelo_2_vencedor*percentagemDo_3_ganhador); 

    printf("\nO valor do primeiro ganhador e de: %.2f\n",valorGanhoPelo_1_vencedor);
    printf("\nO valor do segundo ganhador e de: %.2f\n",valorGanhoPelo_2_vencedor);
    printf("\nO valor do terceiro ganhador e de: %.2f\n",valorGanhoPelo_3_vencedor);
    
    return (0);
}