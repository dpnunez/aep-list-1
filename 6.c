#include <stdio.h>

// Author: Daniel Nunez

// Escreva um algoritmo que leia o c�digo de um
// aluno e suas tr�s notas. Calcule a m�dia
// ponderada do aluno, considerando que o peso
// para a maior nota seja 4 e para as duas restantes,
// 3. Mostre o c�digo do aluno, suas tr�s notas, a
// m�dia calculada e a mensagem "APROVADO"
// se a m�dia for maior ou igual a 5 e
// "REPROVADO" caso contr�rio

int main() {
	int codigo;
	float nota2, nota3, maiorNota, notaTransicao, mediaPonderada;
	
	
	// Leitura do codigo do aluno
	printf("Informe o codigo do aluno: ");
	scanf("%d", &codigo);
	
	
	// Leitura das notas
	printf("Informe a nota 1: ");
	scanf("%f",&maiorNota);

	
	printf("Informe a nota 2: ");
	scanf("%f",&nota2);
	
	if (nota2 > maiorNota) {
		notaTransicao = maiorNota;
		maiorNota = nota2;
		nota2 = notaTransicao;
	}
	
	printf("Informe a nota 3: ");
	scanf("%f",&nota3);
	
	if (nota3 > maiorNota) {
		notaTransicao = maiorNota;
		maiorNota = nota3;
		nota3 = notaTransicao;
	}
	
	mediaPonderada = maiorNota * 0.4 + nota2 * 0.3 + nota3 * 0.3;


	printf("Codigo do aluno: %d\n", codigo);
	printf("As notas do aluno foram: %.2f, %.2f , %.2f \n", maiorNota, nota2, nota3);
	printf("Media ponderada: %.2f\n", mediaPonderada);
	
	if (mediaPonderada >= 5) {
		printf("APROVADO");
	} else {
		printf("REPROVADO");
	}
	
	return 0;
}
