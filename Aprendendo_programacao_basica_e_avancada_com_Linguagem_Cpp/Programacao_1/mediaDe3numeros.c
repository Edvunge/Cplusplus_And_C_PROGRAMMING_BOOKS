#include <stdio.h>
#include <stdlib.h>

// 3. Fa�a um programa em C que mostre 
// a m�dia aritm�tica entre os n�meros 5, 8, 12.

int main(void) {
	int num1 = 5, num2 = 8, num3 = 12, media;	
	
	media = (num1+num2+num3)/3;
	printf("o valor da media: %d ",media);
	return (0);
}
