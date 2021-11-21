/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e T�cnicas de Programa��o
* Professora: Ivana
* Aluno: Francisvan Oliveira Pessoa
*
* Fazer um programa para achar a s�rie fibonacci dos n primeiros termos.
* 1   1   2   3   5   8   13 ...
**************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale> //biblioteca para utilizar setlocale

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int t1=1, t2=1, t3, n, i;
	
	printf("-------------------------");
	printf("\nSEQU�NCIA FIBONACCI");
	printf("\n-------------------------\n\n");
	printf("Quantos termos voc� quer mostrar: ");
	scanf("%d",&n);
	
	system("cls");//limpar tela
	
	if(n<=0){
		printf("Valor inv�lido!");
	}else{
		printf("------- RESULTADO -------\n");
		printf("\n%d - %d ", t1, t2);
	
		for(i=3; i<=n; i++){
			t3=t1+t2;
			printf("- %d ", t3);
			t1=t2;
			t2=t3;			
		}//fim for		
	}//fim elser
	
	return 0;
}
