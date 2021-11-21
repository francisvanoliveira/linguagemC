/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e T�cnicas de Programa��o
* Professora: Ivana
* Aluno: Francisvan Oliveira Pessoa
*
* Fazer um programa para calcular o valor de H, sendo H = 1+1/2+1/3+1/4+...+1/n,  
* onde N � fornecido pelo usu�rio.
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>//biblioteca para utilizar setlocale

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float h=0,n;
	
	printf("Informe um n�mero: ");
	scanf("%f",&n);
	
	while(n>0){
		h+=(1/n);
		n--;
	}
	
	printf("Resultado: %.2f",h);
	
	return 0;
}
