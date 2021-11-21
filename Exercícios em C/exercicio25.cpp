/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e Técnicas de Programação
* Aluno: Francisvan Oliveira Pessoa
*
* Faça um programa para ler 10 números diferentes a serem armazenados em um vetor. Os números deverão ser armazenados no vetor na ordem em que forem lidos, sendo que, 
* caso o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir a ele para digitar outro número. 
* Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram fornecidos. Exiba na tela o vetor final que foi digitado.
**************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#define TAM 10

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int vet[TAM], i, j;
	
	for(i=0; i<TAM; i++){
		printf("Informe o valor %dº: ", i+1);
		scanf("%d",&vet[i]);
		system("cls");//limpa tela
		for(j=0; j<i; j++){
			if(vet[i]==vet[j]){
				printf("Número repetido! Informe um valor diferente.\n");
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
