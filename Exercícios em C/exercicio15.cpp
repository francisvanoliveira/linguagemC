/*Em um cinema, certo dia, cada espectador respondeu a um question�rio, 
que perguntava a sua idade (ID) e a opini�o em rela��o ao filme (OP), seguindo os seguintes crit�rios:
A-�timo
B-Bom
C-Regular
D-Ruim
E-P�ssimo
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>//biblioteca para utilizar setlocale
#include<ctype.h>//biblioteca para utilizar o toupper


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int id, idade=0, md, cont=0;
	float conta=0, contb=0, contc=0, contd=0, conte=0;
	char op;
	
	printf("----- PESQUISA SATISFA��O CINEMA -----\n\n");
	printf("Informe sua opni�o: ");
	printf("\nA - �timo");
	printf("\nB - Bom");
	printf("\nC - Regular");
	printf("\nD - Ruim");
	printf("\nE - P�ssimo");
	
	printf("\nInforme sua idade: ");
	scanf("%d",&id);
	
	while(id>=0){
		idade+=id;//acumaldor idade
		printf("\nInforme sua opni�o: ");
		scanf("%s",&op);		
		op=toupper(op);//converte de minusculo para maiusculo
		switch (op){
			case 'A':
				printf("Resposta recebida\n");
				conta++;
				break;				
			case 'B':
				printf("Resposta recebida\n");
				contb++;
				break;
			case 'C':
				printf("Resposta recebida\n");
				contc++;
				break;
			case 'D':
				printf("Resposta recebida\n");
				contd++;
				break;
			case 'E':
				printf("Resposta recebida\n");
				conte++;
				break;
			default:
				printf("Op��o Inv�lida!\n");
			
		}
		cont++;//contadro da pessoas responderam
		printf("\nInforme sua idade: ");
		scanf("%d",&id);
		
	}
	
	md=idade/cont;//calcular a media das idades
	system("cls");//limpar tela
	printf("-------- INFORMA��ES --------\n");
	printf("Quantidade de respostas: %d",cont);
	printf("\nM�dia das idades: %d",md);
	printf("\nPorcentagem de �timo: %.2f ", (conta/cont)*100);
	printf("\nPorcentagem de Bom: %.2f ", (contb/cont)*100);
	printf("\nPorcentagem de Regular: %.2f ", (contc/cont)*100);
	printf("\nPorcentagem de Ruim: %.2f ", (contd/cont)*100);
	printf("\nPorcentagem de P�ssimo: %.2f ", (conte/cont)*100);
	
	return 0;
	
}
