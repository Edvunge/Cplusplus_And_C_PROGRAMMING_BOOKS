// 8. Faça um programa em C que leia dois números inteiros 
// e mostre a subtração deles.

int main(void) {
	int num1, num2, subtracao;
	
	printf("Digite um numero: \n");
	scanf("%d",&num1);
	
	printf("Digite o segundo numero: \n");
	scanf("%d",&num2);
	
	if (num1 > num2) {
		subtracao = num1 - num2;
		printf("o resultado da subtracao: %d\n",subtracao);
	} else {
		subtracao = num2 - num1;
		printf("o resultado da subtracao: %d\n",subtracao);
	}
	return (0);
}
