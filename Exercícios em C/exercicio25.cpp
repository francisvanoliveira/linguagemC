/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e Técnicas de Programação
* Professora: Ivana
* Aluno: Francisvan Oliveira Pessoa
*
* Faça um programa que receba em um vetor 6 números inteiros, calcule e mostre:
* -A soma dos números pares;
* -O menor elemento do vetor e a posição que se encontra.
**************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define TAM 6

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int vet[TAM], i, soma=0, menor;
	
	for(i=0; i<TAM; i++){
		printf("Informe o %dº valor: ", i+1);
		scanf("%d",&vet[i]);
		system("cls");
	}
	
	menor=vet[1];
	for(i=0; i<TAM; i++){
		if(vet[i]%2==0)
			soma=soma+vet[i];
		if(vet[i]<menor)
			menor=vet[i];
	}
	printf("----- RESULTADO -----\n\n");
	printf("Soma valores par: %d\n", soma);
	printf("Menor elemento: %d", menor);
}
