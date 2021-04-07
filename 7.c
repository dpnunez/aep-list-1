#include<stdio.h>

// Author: Daniel Nunez

// Faça um algoritmo que leia um número inteiro e
// mostre uma mensagem indicando se este
// número é par ou ímpar, e se é positivo, negativo
// ou zero. 

int main(){
	int number;

	printf("Insira o numero:");
	scanf("%d", &number);

	// validacao par ou impar
	if (number % 2 == 0) {
		printf("Numero PAR\n");
	} else {
		printf("Numero IMPAR\n");
	}

	// Validacao positivo negativo ou zero
	if (number == 0) {
		printf("ZERO");
	} else if (number > 0) {
		printf("POSITIVO");
	} else {
		printf("NEGATIVO");
	}

	return 0;
}
