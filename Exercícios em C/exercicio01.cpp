/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e T�cnicas de Programa��o
* Professora: Ivana
* Aluno: Francisvan Oliveira Pessoa
*
* Fazer um algoritmo para achar o fatorial de um n�mero N.
* Ex.: 4! = 1 x 2 x 3 x 4 = 24
* Lembre-se: o fatorial de 0 � 1 (por defini��o)
**************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale (LC_ALL,"Portuguese");
	int fat=1, n, cont;
	
	printf("Informe um valor: ");
	scanf("%d",&n);
	
	for(cont=1; cont<=n; cont++)
		fat*=cont;
		
	system("cls");
	printf("----- RESULTADO -----\n\n");
	printf("Fatorial de %d � %d",n, fat);
	return 0;
}
