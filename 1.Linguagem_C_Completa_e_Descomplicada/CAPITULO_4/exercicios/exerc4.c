#include <stdio.h>
#include <stdlib.h>

/*
4) Faça um programa que leia o salário de um trabalhador 
e o valor da prestação de um empréstimo. Se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo não concedido.”
• Caso contrário, imprima: “Empréstimo concedido.”
*/

int main(void) {
    float salaryWorker = 0.0, taxesIncomes = 0.0;

    printf("Digite o salario do funcionario: ");
    scanf("%d",&salaryWorker);

    printf("Digite o valor da prestacao de um emprestimo: ");
    scanf("%d",&taxesIncomes);

    // taxa = (taxa*salario)/100
    taxesIncomes = (salaryWorker*20)/100;
    
    if(taxesIncomes > 20) {
        printf("Emprestimo nao concedido.");
    } else {
        printf("Emprestimo concedido.");
    }
    return (0);
}