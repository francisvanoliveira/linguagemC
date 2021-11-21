/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e Técnicas de Programação
* Professora: Ivana
* Aluno: Francisvan Oliveira Pessoa
*
* Fazer um fluxograma para ler um número e escrever o somatório dos seus dígitos. Ex.: 217 ? 2+1+7 = 9 . Dica: trabalhe com divisão inteira. 
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>//biblioteca para utilizar setlocale

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num, div, resul=0;
	
	printf("Informe um número inteiro: ");
	scanf("%d",&num);
	
	while(num>0){
		div=num%10;
		num/=10;
		resul+=div;
	}
	
	printf("Somatória dos digitos: %d",resul);
	return 0;
}
