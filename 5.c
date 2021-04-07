#include<stdio.h>

// Author: Daniel Nunez

//Elabore um algoritmo que, dada a idade de um
//nadador classifica-o em uma das seguintes
//categorias:
// 		infantil	A	=	5	- 7	anos	
// 		infantil	B	=	8-10	anos	
// 		juvenil	A	=	11-13	anos	
// 		juvenil	B	=	14-17	anos	
// 		adulto	=	maiores	de	18	anos
 

int main(){
	int idade;

	printf("Insira a idade:");
	scanf("%d", &idade);


	if (idade > 18) {
		printf("adulto");
	} else if (idade >= 14) {
		printf("Juvenil B");
	} else if (idade >= 11) {
		printf("Juvenil A");
	} else if (idade >= 8) {
		printf("Infantil B");
	} else if (idade >= 5) {
		printf("Infantil A");
	} else {
		printf("Idade nao mapeada");
	}

	return 0;
}
