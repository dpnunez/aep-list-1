#include<stdio.h>

// Faça um algoritmo que leia 3 números e diga se podem ser lados de um triângulo. Observe: A, B e C são lados de um triângulo se:
// A < (B+C) e B < (C+A) e C < (A+B).

int main(){
	float a, b, c;

	printf("Insira lado A:");
	scanf("%f", &a);

	printf("Insira lado b:");
	scanf("%f", &b);

	printf("Insira lado B:");
	scanf("%f", &b);

	if (a < (b + c) && b < (c + a) && c < (a + b)) {
		printf("Podem ser lados de um triangulo");
		return 0;
	}

	printf("Nao podem ser lados de um triangulo");

	return 0;
}