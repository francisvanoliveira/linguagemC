/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e T�cnicas de Programa��o
* Aluno: Francisvan Oliveira Pessoa
*
* Escreva um programa para ler 2 valores e se o segundo valor informado for ZERO, 
* deve ser lido um novo valor, ou seja, para o segundo valor n�o pode ser aceito o valor zero e imprimir o resultado da divis�o do primeiro valor lido pelo segundo valor lido. 
**************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>//biblioteca para utilizar setlocale

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float n1, n2, div=0;
	
	printf("Informe o primeiro valor: ");
	scanf("%f",&n1);
	printf("Informe o segundo valor: ");
	scanf("%f",&n2);
	
	if(n2==0){
		while(n2==0){
			printf("O segundo valor n�o aceita 0. Informe outro n�mero!\n");
			printf("Informe o segundo valor: ");
			scanf("%f",&n2);
			system("cls");//limpa tela
		}
	}
	
	div=n1/n2;
	printf("----- RESULTADO -----\n\n");
	printf("Divis�o entre %.2f e %.2f: %.2f", n1, n2, div);
	
	return 0;
}
