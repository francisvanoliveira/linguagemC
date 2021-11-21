/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e Técnicas de Programação
* Professora: Ivana
* Aluno: Francisvan Oliveira Pessoa
*
* A série de Fetuccine difere da série de Ricci porque o termo de posição par é resultado da subtração dos dois anteriores. 
* Os termos ímpares continuam sendo o resultado da soma dos dois elementos anteriores. Imprima os n primeiros termos da série de Fetuccine.
**************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n, i, t1, t2, t3;
	
	printf("-------------------------");
	printf("\nSEQUÊNCIA FETUCCINE");
	printf("\n-------------------------\n\n");	
	printf("Quantos termos irá mostrar? ");
	scanf("%d",&n);
	
	if(n<=0)
		printf("\nValor inválido!");
	else{
		printf("Informe o 1º termo: ");
		scanf("%d",&t1);
		printf("Informe o 2º termo: ");
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
