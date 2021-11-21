/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e T�cnicas de Programa��o
* Professora: Ivana
* Aluno: Francisvan Oliveira Pessoa
*
* Fazer um programa para verificar se um n�mero lido � primo ou n�o. 
* N�mero primo � aquele que � divis�vel por 1 e por ele mesmo.
**************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>//biblioteca para utilizar setlocale

int main (){
	setlocale(LC_ALL,"Portuguese");
	
    int n,i,res=0;
    
    printf("Informe um valor: ");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++){
    	if(n%i==0)
		res++;	    	
	}
	system("cls");//lipmar tela
	printf("-------- RESULTADO --------\n");
	if (res==2)
		printf("O n�mero %d � primo!", n);
	else
		printf("O n�mero %d n�o � primo!", n);
		
	return 0;
}
