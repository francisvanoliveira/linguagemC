/*Fa�a um programa que permita ao usu�rio entrar com uma matriz de tamanho 3x3 de n�meros inteiros. 
Em seguida, calcule um vetor contendo tr�s posi��es, em que cada posi��o dever� armazenar a soma dos n�meros de cada coluna da matriz. Exiba na tela esse array.
*/

#include<stdio.h>
#include<stdlib.h>

#define tam 3

int main (){
	int matriz[tam][tam], vet[tam]={0}, i, j;
	
	printf("----- DIGITE OS ELEMENTOS DA MATRIZ -----\n");
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("[%d][%d] = ", i, j);
			scanf("%d",&matriz[i][j]);
		}//coluna
	}//linha
	
	system("cls");//limpa tela
	
	for(j=0; j<tam; j++){
		for(i=0; i<tam; i++){
			vet[j]=vet[j]+matriz[i][j];
		}//linha
	}//coluna
	
	printf("----- SOMA DAS COLUNAS -----\n\n");
	for(j=0; j<tam; j++){
		printf(" %d ",vet[j]);
	}
	return 0;
}
