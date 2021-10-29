/*Em um cinema, certo dia, cada espectador respondeu a um questionário, 
que perguntava a sua idade (ID) e a opinião em relação ao filme (OP), seguindo os seguintes critérios:
A-Ótimo
B-Bom
C-Regular
D-Ruim
E-Péssimo
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
	
	printf("----- PESQUISA SATISFAÇÃO CINEMA -----\n\n");
	printf("Informe sua opnião: ");
	printf("\nA - Ótimo");
	printf("\nB - Bom");
	printf("\nC - Regular");
	printf("\nD - Ruim");
	printf("\nE - Péssimo");
	
	printf("\nInforme sua idade: ");
	scanf("%d",&id);
	
	while(id>=0){
		idade+=id;//acumaldor idade
		printf("\nInforme sua opnião: ");
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
				printf("Opção Inválida!\n");
			
		}
		cont++;//contadro da pessoas responderam
		printf("\nInforme sua idade: ");
		scanf("%d",&id);
		
	}
	
	md=idade/cont;//calcular a media das idades
	system("cls");//limpar tela
	printf("-------- INFORMAÇÕES --------\n");
	printf("Quantidade de respostas: %d",cont);
	printf("\nMédia das idades: %d",md);
	printf("\nPorcentagem de Ótimo: %.2f ", (conta/cont)*100);
	printf("\nPorcentagem de Bom: %.2f ", (contb/cont)*100);
	printf("\nPorcentagem de Regular: %.2f ", (contc/cont)*100);
	printf("\nPorcentagem de Ruim: %.2f ", (contd/cont)*100);
	printf("\nPorcentagem de Péssimo: %.2f ", (conte/cont)*100);
	
	return 0;
	
}
