/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e Técnicas de Programação
* Professora: Ivana
* Aluno: Francisvan Oliveira Pessoa
*
* Fazer um programa para verificar se um número lido é primo ou não. 
* Número primo é aquele que é divisível por 1 e por ele mesmo.
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
		printf("O número %d é primo!", n);
	else
		printf("O número %d não é primo!", n);
		
	return 0;
}
