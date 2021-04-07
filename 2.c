#include<stdio.h>

// Faça um algoritmo que leia um número e mostre se ele é positivo, negativo ou zero.

int main(){
	float a;

	printf("Insira um numero: ");
	scanf("%f", &a);


	if (a > 0) {
		printf("Positivo");
	} else if (a < 0)  {
		printf("Negativo");
	} else {
		printf("Zero");
	}

	return 0;
}