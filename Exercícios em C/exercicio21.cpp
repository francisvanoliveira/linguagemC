/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e Técnicas de Programação
* Aluno: Francisvan Oliveira Pessoa
*
* Faça um programa com 3 vetores de 9 posições e crie o 4º vetor com o 1º terço do primeiro vetor, 
* o 2º terço do segundo vetor e o último terço do terceiro vetor. Escrever o vetor resultante ao final.
**************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define TAM 9

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int v1[TAM], v2[TAM], v3[TAM], v4[TAM]={0}, i;
	
	printf("----- VETOR 1 -----\n");
	for(i=0; i<TAM; i++){
		printf("informe o %dº valor: ",i+1);
		scanf("%d",&v1[i]);
	}
	
	printf("----- VETOR 2 -----\n");
	for(i=0; i<TAM; i++){
		printf("informe o %dº valor: ", i+1);
		scanf("%d",&v2[i]);
	}
	
	printf("----- VETOR 3 -----\n");
	for(i=0; i<TAM; i++){
		printf("informe o %dº valor: ", i+1);
		scanf("%d",&v3[i]);
	}
	
	for(i=0; i<TAM; i++){
		if(i<3)
			v4[i]=v1[i];
		if(i>=3 && i<6)
			v4[i]=v2[i];
		if(i>=6)
			v4[i]=v3[i];
			
		printf("%d ",v4[i]);
	}
		
	return 0;	
}
