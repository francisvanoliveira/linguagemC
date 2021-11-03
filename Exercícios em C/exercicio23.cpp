/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e Técnicas de Programação
* Professora: Ivana
* Aluno: Francisvan Oliveira Pessoa
*
* Faça um programa que leia um conjunto de 30 números e armazene-os em um vetor. 
* O programa deverá então copiar este vetor para outros dois, sendo que, 
* a 1ª copia conterá os 15 primeiros elementos do vetor original e a 2ª copia deverá conter os 15 últimos.
**************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int v1[30], v2[15], v3[15], i;
		
	for(i=0; i<30; i++){
		printf("Informe o %dº valor: ", i+1);
		scanf("%d",&v1[i]);
		system("cls");//limpar tela
	}
		
	for(i=0; i<30; i++){
		if(i<15)
			v2[i]=v1[i];
		else
			v3[i]=v1[i];
	}
	
	printf("----- VETOR COPIA 1 -----\n");	
	for(i=0; i<15; i++){
		printf("%d ",v2[i]);		
	}
	
	printf("\n\n----- VETOR COPIA 2 -----\n");	
	for(i=15; i<30; i++){
		printf("%d ",v3[i]);		
	}
	
	return 0;
}
