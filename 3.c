#include<stdio.h>

// Escrever um algoritmo que leia uma nota e mostre o conceito equivalente. Suponha a seguinte tabela de conversão.

int main(){
	int nota;

	printf("Insira uma nota: ");
	scanf("%d", &nota);

	if (nota >= 0 && nota <= 5) {
		printf("D");
	} else if (nota > 5 && nota <= 7) {
		printf("C");
	} else if (nota > 7 && nota <= 9) {
		printf("B");
	} else if (nota > 9 && nota <= 10) {
		printf("A");
	} else { 
		printf("Not mapped");
	}

	return 0;
}