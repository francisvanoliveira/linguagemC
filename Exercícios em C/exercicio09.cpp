/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e Técnicas de Programação
* Professora: Ivana
* Aluno: Francisvan Oliveira Pessoa
*
* A série de Ricci difere da série de Fibonacci porque os dois primeiros termos podem ser definidos pelo usuário. 
* Imprima os n primeiros termos da série de Ricci.
**************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>//biblioteca para utilizar setlocale

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int t1, t2, t3=0, i, n;
	
	printf("Informe o 1º termo: ");
	scanf("%d",&t1);
	printf("Informe a 2º termo: ");
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
