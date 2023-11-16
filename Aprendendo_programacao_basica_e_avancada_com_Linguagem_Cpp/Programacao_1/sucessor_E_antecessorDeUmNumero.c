#include <stdio.h>
#include <stdlib.h>

// 6. Faça um programa em C que leia um número inteiro 
// 		e mostre o seu antecessor e o seu sucessor.

/*int main(void) {
	int num, antecessor, sucessor;	
	
	printf("Digite um numero inteiro\n");
	scanf("%d",&num);
	
	antecessor = (num - 1);
	sucessor = (num + 1);
	
	printf("o sucessor do numero: %d e %d \n ja o antecessor e: %d",num ,sucessor ,antecessor);
	return (0);
}*/

// 9. Faça um programa em C que leia um número real 
// e mostre 1/4 deste número.

/*int main(void){
	float num, quartaParte;
	
	printf("Digite um num: ");
	scanf("%f",&num);
	
	quartaParte = (num/4);
	printf("um quarto do numero: %.1f e %.1f",num,quartaParte);
	return (0);
}*/

// 10. Faça um programa em C que leia três números reais 
// e calcule a média aritmética destes numeros
// No final, o programa deve mostrar o resultado do cálculo.

/*int main(void){
	float num1, num2, num3, media;
	
	printf("Digite um num: ");
	scanf("%f",&num1);
	
	printf("Digite um num: ");
	scanf("%f",&num2);
	
	printf("Digite um num: ");
	scanf("%f",&num3);
	
	media = (num1+num2+num3)/3;
	printf("O Resultado da Media: %.2f\n",media);
	return (0);
}*/


// 11. Faça um programa em C que leia dois números reais e 
// calcule as quatro operações básicas entre estes dois números, 
// adição, subtração, multiplicação e divisão. No final, o programa deve
// mostrar os resultados dos cálculos.

/*int main(void) {
	float num1, num2, soma, subtrt, multpl, divisao;
	
	printf("Digite um num: ");
	scanf("%f",&num1);
	
	printf("Digite o segundo num: ");
	scanf("%f",&num2);
	
	soma = (num1 + num2); 
	multpl = (num1 * num2);
	divisao = (num1 / num2);
	
	printf("O resultado da soma entre %.1f + %.1f = %.1f\n",num1 ,num2,soma);
	if(num1 > num2) {
		subtrt = (num1 - num2);
		printf("O resultado da sobrt entre %.1f + %.1f = %.1f\n",num1 ,num2,subtrt);
	} else {
		subtrt = (num2 - num1);
		printf("O resultado da sobrt entre %.1f + %.1f = %.1f\n",num2 ,num1,subtrt);
	}
	printf("O resultado da multpl entre %.1f + %.1f = %.1f\n",num1 ,num2,multpl); 
	
	if(num2 > 0) {
		printf("O resultado da divisao entre %.1f + %.1f = %.1f\n",num1 ,num2,divisao);
	} else {
		printf("Impossivel calcular \n");
	}
	return (0);
}*/


// 12. Faça um programa em C que leia um número real e 
// calcule o quadrado deste número. No final,
// o programa deve mostrar o resultado do cálculo.

/*int main(void) {
	float num, quadrd;
	
	printf("\nDigite um numero: ");
	scanf("%f",&num);
	
	quadrd = (num*num);
	
	printf("O Resultado do quadrd do numero: %.1f",quadrd);
	return (0);
}*/

// 13. Faça um programa em C que leia o saldo de uma conta poupança e 
// mostre o novo saldo, considerando um reajuste de 2%.

/*int main(void) {
	float saldoDaConta, novoSaldo, reajuste;
	
	printf("Digite o saldo: ");
	scanf("%f",&saldoDaConta);
	
	// reaj = 45*sal/100
	reajuste = (2*saldoDaConta)/100;
	
	// reaj = sal-reaj;
	novoSaldo = saldoDaConta - reajuste;
	printf("O valor do Novo Saldo: %.2f\n",novoSaldo);	
	return (0);
}*/

// 14. Faça um programa em C que leia a base e a altura de um retângulo e 
// mostre o perímetro 2*(base + altura) e a área (base * altura).

/*int main(void) {
	float base, altura, perimetro, area;
	
	printf("Digite o valor da base: ");
	scanf("%f",&base);
	
	printf("Digite o valor da altura: ");
	scanf("%f",&altura);
	
	// calculo do perimetro:
	perimetro = 2*(base + altura);
	
	// calculo da area: 
	area = (base * altura);
	
	printf("O valor do Perimetro: %.2f \n",perimetro);
	printf("O valor da Area: %.2f \n",area);
	return (0);
}*/

// 15. Faça um programa em C que leia o valor de um produto, 
// a percentagem do desconto desejado
// e mostre o valor do desconto e o valor do produto subtraindo o desconto.

int main(void){
	float produto, percentagem, valorDesconto;
	
	printf("Digite o valor de um produto: \n");
	scanf("%f",&produto);
	
	printf("Qual a percentagem de desconto desejada\n");
	scanf("%f",&percentagem);
	
	valorDesconto = (produto*percentagem)/100;
	produto -= valorDesconto;
	
	printf("o valor do produto: %.2f\n",produto);
	printf("o valor do desconto: %.2f\n",valorDesconto);
	return (0);
}

/*16. Faça um programa em C que calcule o reajuste do salário de um funcionário. Para isso, o
programa deverá ler o salário atual do funcionário e ler a percentagem de reajuste. No final
mostrar o valor do novo salário.

17. Faça um programa em C que calcule a conversão entre graus centígrados e Fahrenheit.
Para isso, leia o valor em centígrados e calcule com base na fórmula F= (9*C+160) / 5. Após
calcular o programa deve mostrar o resultado da conversão.
Em que:
• F = Graus em Fahrenheit
• C = Graus centígrados

18. Faça um programa em C que calcule a quantidade de litros de combustível consumidos numa
viagem, sabendo-se que o carro tem autonomia de 12 km por litro de combustível. O programa
deverá ler o tempo decorrido na viagem e a velocidade média e aplicar as fórmulas:

D= T *V
L= D/12
Em que:
• D = Distância percorrida em horas
• T = Tempo decorrido
• V = Velocidade média
• L = Litros de combustível consumidos
No final, o programa deverá mostrar a distância percorrida e a quantidade de litros consumidos na
viagem.

19. Faça um programa em C que calcule o valor de uma prestação em atraso. Para isso, o
programa deve ler o valor da prestação vencida, a taxa periódica de juros e o período de atraso.
Ao final, o programa deve mostrar o valor da prestação atrasada, o período de atraso, os juros que
serão cobrados pelo período de atraso, o valor da prestação acrescido dos juros. Considere juros
simples.

20. Faça um programa em C que efetue a apresentação do valor da conversão em Euros (EUR$) de
um valor lido em dólar (US$). Para isso, será necessário também ler o valor da cotação do dólar.

*/

