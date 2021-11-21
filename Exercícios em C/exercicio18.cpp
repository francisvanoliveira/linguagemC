/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e Técnicas de Programação
* Professora: Ivana
* Aluno: Francisvan Oliveira Pessoa
*
* Dado uma matriz de ordem 3x3, faça um programa que:
* -Calcule a soma dos elementos da primeira coluna;
* -Calcule o produto dos elementos da primeira linha;
* -Calcule a soma de todos os elementos da matriz;
* -Calcule a soma do diagonal principal. 
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

#define TAM 3//defir o tamanho da matriz


int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int matriz[TAM][TAM], i, j;
	int soma=0, produto=1, total=0, dia=0;
	
	printf("Digite o valor dos elemntos da Matriz\n\n");
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			printf("\n[%d][%d] = ", i, j);
			scanf("%d",&matriz[i][j]);
			
			total+=matriz[i][j];
			if(j==0)
				soma+=matriz[i][j];
			if(i==0)
				produto*=matriz[i][j];
			if(i==j)
				dia+=matriz[i][j];
		}//coluna
	}//linha

	
	system("cls");//limpar tela
	printf("-------- RESULTADO --------\n");
    printf("Soma elementos da 1º coluna: %d", soma);
    printf("\nProduto elementos da 1º linha: %d",produto);
    printf("\nSoma total da matriz: %d",total);
    printf("\nSoma diagonal principal: %d",dia);
    
    return 0;	
}
