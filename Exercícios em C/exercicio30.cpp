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
		}//coluna
	}//linha
	
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			total+=matriz[i][j];
			if(j==1)
				coluna+=matriz[i][j];
			if(i==3)
				linha+=matriz[i][j];//soma a minha 4
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
