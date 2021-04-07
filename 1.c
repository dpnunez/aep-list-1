#include<stdio.h>

// Construir um algoritmo que dados dois números escreva o maior.

int main(){
	float a, b;

	printf("Insira o valor A: ");
	scanf("%f", &a);

	printf("Insira o valor B: ");
	scanf("%f", &b);

	if (a > b) {
		printf("O maior valor eh A: %f", a);
	} else {
		printf("O maior valor eh B: %f", b);
	}

	return 0;
}