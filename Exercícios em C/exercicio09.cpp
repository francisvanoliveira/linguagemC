/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e T�cnicas de Programa��o
* Professora: Ivana
* Aluno: Francisvan Oliveira Pessoa
*
* A s�rie de Ricci difere da s�rie de Fibonacci porque os dois primeiros termos podem ser definidos pelo usu�rio. 
* Imprima os n primeiros termos da s�rie de Ricci.
**************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>//biblioteca para utilizar setlocale

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int t1, t2, t3=0, i, n;
	
	printf("Informe o 1� termo: ");
	scanf("%d",&t1);
	printf("Informe a 2� termo: ");
	scanf("%d",&t2);
	printf("Informe a quantidade de termos: ");
	scanf("%d",&n);
	
	printf("%d - %d", t1, t2);
	
	for(i=3; i<=n; i++){
		t3=t1+t2;
		printf(" - %d", t3);
		t1=t2;
		t2=t3;
	}
	return 0;
}
