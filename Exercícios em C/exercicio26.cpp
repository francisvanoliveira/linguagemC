/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e Técnicas de Programação
* Aluno: Francisvan Oliveira Pessoa
*
* Faça um programa para ler uma matriz 3x3 e traga o produto da diagonal principal.
**************************************************************************/

#include<stdio.h>
#include<stdlib.h>

#define tam 3//defir o tamanho da matriz


int main (){
	int matriz[tam][tam], i, j, dia=1;
	
	printf("Digite o valor dos elemntos da Matriz\n\n");
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("\n[%d][%d] = ", i, j);
			scanf("%d",&matriz[i][j]);
			
			if(i==j)
				dia=dia*matriz[i][j];
		}//coluna
	}//linha
		
	system("cls");//limpar tela
	printf("-------- RESULTADO --------\n");
    printf("\nProduto diagonal principal: %d",dia);
        
    return 0;
	
}
