/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e T�cnicas de Programa��o
* Aluno: Francisvan Oliveira Pessoa
*
* Fa�a um programa com 3 vetores de 9 posi��es e crie o 4� vetor com o 1� ter�o do primeiro vetor, 
* o 2� ter�o do segundo vetor e o �ltimo ter�o do terceiro vetor. Escrever o vetor resultante ao final.
**************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define TAM 9

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int v1[TAM], v2[TAM], v3[TAM], v4[TAM], i;
	
	printf("----- VETOR 1 -----\n");
	for(i=0; i<TAM; i++){
		printf("informe o %d� valor: ",i+1);
		scanf("%d",&v1[i]);
	}
	
	printf("----- VETOR 2 -----\n");
	for(i=0; i<TAM; i++){
		printf("informe o %d� valor: ", i+1);
		scanf("%d",&v2[i]);
	}
	
	printf("----- VETOR 3 -----\n");
	for(i=0; i<TAM; i++){
		printf("informe o %d� valor: ", i+1);
		scanf("%d",&v3[i]);
	}
	
	for(i=0; i<TAM; i++){
		v4[i]=v1[i];
	}
	
	for(i=3; i<TAM; i++){
		v4[i]=v2[i];
	}
	
	for(i=6; i<TAM; i++){
		v4[i]=v3[i];
	}
	
	for(i=0; i<TAM; i++){
		printf("%d ",v4[i]);
	}
	
	return 0;	
}
