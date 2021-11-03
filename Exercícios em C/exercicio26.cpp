/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e Técnicas de Programação
* Aluno: Francisvan Oliveira Pessoa
*
* QUESTÃO NÃO FINALIZADA
*
* Escreva um programa que permita a leitura dos nomes de 10 pessoas e armazene os nomes lidos em um vetor. 
* Após isto, o programa deve permitir a leitura de mais 1 nome qualquer de pessoa e depois escrever a mensagem ACHEI, 
* se o nome estiver entre os 10 nomes lidos anteriormente (guardados no vetor), ou NÃO ACHEI caso contrário
**************************************************************************/

#include<stdio.h>
#include<string.h>
#include<locale.h>

#define TAM 3

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char nomes[TAM][20], nome, i;
	bool n=false;
	
	for(i=0; i<TAM; i++){
		printf("Informe o %dº nome: ", i+1);
		scanf("%s",&nomes[i]);
	}
	
	printf("\nInforme uma nome para busca: ");
	scanf("%s",&nome);
	
	/*for(i=0; i<TAM; i++){
		if(strcmp(nomes[i], nome)==0)
			n=true;
	}
	
	if(n==true)
		printf("Achei!");
	else
		printf("Não Achei!");*/
		
	return 0;	
}
