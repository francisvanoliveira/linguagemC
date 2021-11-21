/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e T�cnicas de Programa��o
* Professora: Ivana
* Aluno: Francisvan Oliveira Pessoa
*
* A s�rie de Fetuccine difere da s�rie de Ricci porque o termo de posi��o par � resultado da subtra��o dos dois anteriores. 
* Os termos �mpares continuam sendo o resultado da soma dos dois elementos anteriores. Imprima os n primeiros termos da s�rie de Fetuccine.
**************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n, i, t1, t2, t3;
	
	printf("-------------------------");
	printf("\nSEQU�NCIA FETUCCINE");
	printf("\n-------------------------\n\n");	
	printf("Quantos termos ir� mostrar? ");
	scanf("%d",&n);
	
	if(n<=0)
		printf("\nValor inv�lido!");
	else{
		printf("Informe o 1� termo: ");
		scanf("%d",&t1);
		printf("Informe o 2� termo: ");
		scanf("%d",&t2);
		
		system("cls");
		printf("----- RESULTADO -----\n");
		printf("\n%d - %d ", t1, t2);
	
		for(i=3; i<=n; i++){
			if(i%2==0)
				t3=t2-t1;
			else
				t3=t2+t1;
			
			printf("- %d ", t3);
			
			t1=t2;
			t2=t3;
		}
	}

	return 0;	
}
