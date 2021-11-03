/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e T�cnicas de Programa��o
* Professora: Ivana
* Aluno: Francisvan Oliveira Pessoa
*
* Fa�a um programa que leia um conjunto de 30 n�meros e armazene-os em um vetor. 
* O programa dever� ent�o copiar este vetor para outros dois, sendo que, 
* a 1� copia conter� os 15 primeiros elementos do vetor original e a 2� copia dever� conter os 15 �ltimos.
**************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int v1[30], v2[15], v3[15], i;
		
	for(i=0; i<30; i++){
		printf("Informe o %d� valor: ", i+1);
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
