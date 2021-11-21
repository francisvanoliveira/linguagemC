/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e T�cnicas de Programa��o
* Aluno: Francisvan Oliveira Pessoa
*
* Fa�a um programa para ler 10 n�meros diferentes a serem armazenados em um vetor. Os n�meros dever�o ser armazenados no vetor na ordem em que forem lidos, sendo que, 
* caso o usu�rio digite um n�mero que j� foi digitado anteriormente, o programa dever� pedir a ele para digitar outro n�mero. 
* Note que cada valor digitado pelo usu�rio deve ser pesquisado no vetor, verificando se ele existe entre os n�meros que j� foram fornecidos. Exiba na tela o vetor final que foi digitado.
**************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define TAM 10

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int vet[TAM], i, j;
	
	for(i=0; i<TAM; i++){
		printf("Informe o valor %d�: ", i+1);
		scanf("%d",&vet[i]);
		system("cls");//limpa tela
		for(j=0; j<i; j++){
			if(vet[i]==vet[j]){
				printf("N�mero repetido! Informe um valor diferente.\n");
				i--;
			}//fim do if
		}//fim for interno
	}//fim do for
	
	printf("----- VERTOR IMPRESSO -----\n");
	for(i=0; i<TAM; i++){
		printf(" %d ", vet[i]);
	}
	
	return 0;
}
