#include <stdio.h>
#include <stdlib.h>

// 6. Fa�a um programa em C que leia um n�mero inteiro 
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

// 9. Fa�a um programa em C que leia um n�mero real 
// e mostre 1/4 deste n�mero.

/*int main(void){
	float num, quartaParte;
	
	printf("Digite um num: ");
	scanf("%f",&num);
	
	quartaParte = (num/4);
	printf("um quarto do numero: %.1f e %.1f",num,quartaParte);
	return (0);
}*/

// 10. Fa�a um programa em C que leia tr�s n�meros reais 
// e calcule a m�dia aritm�tica destes numeros
// No final, o programa deve mostrar o resultado do c�lculo.

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


// 11. Fa�a um programa em C que leia dois n�meros reais e 
// calcule as quatro opera��es b�sicas entre estes dois n�meros, 
// adi��o, subtra��o, multiplica��o e divis�o. No final, o programa deve
// mostrar os resultados dos c�lculos.

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


// 12. Fa�a um programa em C que leia um n�mero real e 
// calcule o quadrado deste n�mero. No final,
// o programa deve mostrar o resultado do c�lculo.

/*int main(void) {
	float num, quadrd;
	
	printf("\nDigite um numero: ");
	scanf("%f",&num);
	
	quadrd = (num*num);
	
	printf("O Resultado do quadrd do numero: %.1f",quadrd);
	return (0);
}*/

// 13. Fa�a um programa em C que leia o saldo de uma conta poupan�a e 
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

// 14. Fa�a um programa em C que leia a base e a altura de um ret�ngulo e 
// mostre o per�metro 2*(base + altura) e a �rea (base * altura).

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

// 15. Fa�a um programa em C que leia o valor de um produto, 
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

/*16. Fa�a um programa em C que calcule o reajuste do sal�rio de um funcion�rio. Para isso, o
programa dever� ler o sal�rio atual do funcion�rio e ler a percentagem de reajuste. No final
mostrar o valor do novo sal�rio.

17. Fa�a um programa em C que calcule a convers�o entre graus cent�grados e Fahrenheit.
Para isso, leia o valor em cent�grados e calcule com base na f�rmula F= (9*C+160) / 5. Ap�s
calcular o programa deve mostrar o resultado da convers�o.
Em que:
� F = Graus em Fahrenheit
� C = Graus cent�grados

18. Fa�a um programa em C que calcule a quantidade de litros de combust�vel consumidos numa
viagem, sabendo-se que o carro tem autonomia de 12 km por litro de combust�vel. O programa
dever� ler o tempo decorrido na viagem e a velocidade m�dia e aplicar as f�rmulas:

D= T *V
L= D/12
Em que:
� D = Dist�ncia percorrida em horas
� T = Tempo decorrido
� V = Velocidade m�dia
� L = Litros de combust�vel consumidos
No final, o programa dever� mostrar a dist�ncia percorrida e a quantidade de litros consumidos na
viagem.

19. Fa�a um programa em C que calcule o valor de uma presta��o em atraso. Para isso, o
programa deve ler o valor da presta��o vencida, a taxa peri�dica de juros e o per�odo de atraso.
Ao final, o programa deve mostrar o valor da presta��o atrasada, o per�odo de atraso, os juros que
ser�o cobrados pelo per�odo de atraso, o valor da presta��o acrescido dos juros. Considere juros
simples.

20. Fa�a um programa em C que efetue a apresenta��o do valor da convers�o em Euros (EUR$) de
um valor lido em d�lar (US$). Para isso, ser� necess�rio tamb�m ler o valor da cota��o do d�lar.

*/

