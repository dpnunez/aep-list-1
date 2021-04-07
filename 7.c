#include<stdio.h>

// Author: Daniel Nunez

// Fa�a um algoritmo que leia um n�mero inteiro e
// mostre uma mensagem indicando se este
// n�mero � par ou �mpar, e se � positivo, negativo
// ou zero. 

int main(){
	int number;

	printf("Insira o numero:");
	scanf("%d", &number);

	// validacao par ou impar
	if (number % 2) {
		printf("Numero IMPAR\n");
	} else {
		printf("Numero PAR\n");
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
