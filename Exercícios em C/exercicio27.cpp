/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e Técnicas de Programação
* Aluno: Francisvan Oliveira Pessoa
*
* Escreva um programa que lê uma matriz M(5,5) e calcula as somas:
* - da linha 4 de M 
* - da coluna 2 de M
* - da diagonal principal
* - da diagonal secundária
* - de todos os elementos da matriz M 
* Escrever essas somas e a matriz.
**************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define tam 5//defir o tamanho da matriz


int main (){
	int matriz[tam][tam], i, j;
	int coluna=0, linha=0, total=0, dia=0, sec=0;
	
	printf("Digite o valor dos elemntos da Matriz\n\n");
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("\n[%d][%d] = ", i, j);
			scanf("%d",&matriz[i][j]);
			
			total+=matriz[i][j];
			if(j==1)
				coluna+=matriz[i][j];
			if(i==3)
				linha+=matriz[i][j];
			if(i==j)
				dia+=matriz[i][j];
			if (j==tam-i-1)
				sec+=matriz[i][j];
		}//coluna
	}//linha
	
	
	system("cls");//limpar tela
	printf("-------- RESULTADO --------\n");
    printf("Soma elementos da 2 coluna: %d", coluna);
    printf("\nSoma elementos da linha 4: %d",linha);
    printf("\nSoma diagonal principal: %d",dia);
    printf("\nSoma diagonal secundária: %d",sec);
    printf("\nSoma total da matriz: %d",total);
    
    return 0;
	
}
