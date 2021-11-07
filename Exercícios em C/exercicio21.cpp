/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e T�cnicas de Programa��o
* Professora: Ivana
* Aluno: Francisvan Oliveira Pessoa
*
* Construa um programa que leia as informa��es de: horas trabalhadas (HT), valor da hora trabalhada (VH). Calcule e apresente o sal�rio l�quido dos empregados da empresa, baseado nas tabelas abaixo.
* INSS = 11% do sal�rio bruto
* Sal�rio L�quido = Sal�rio Bruto - INSS - Imposto de Renda
* Imposto de Renda ap�s descontar o INSS usar esse valor e ler a al�quota do imposto de renda na tabela abaixo
* Sal�rio Bruto - INSS | Al�quota | Deduzir
* At� $900 | Isento
* De $900 at� $1800 | 15% | $135
* Mais que $1800 | 27,5% | $360
**************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>//bibloteca para usar o setlocale
#include<ctype.h>//bliboteca para usar o toupper

int main(){
	setlocale (LC_ALL,"Portuguese");
	
	float ht, vh, inss, bruto, liq, renda;
	char x;
	
	do{
		printf("----- CALCULO SAL�RIO -----\n\n");
		printf("Horas trabalhadas: ");
		scanf("%f",&ht);
		printf("Valor da hora: ");
		scanf("%f",&vh);
		
		bruto=vh*ht;
		inss=bruto*0.11;
		
		if((bruto>=900)&&(bruto<1800))
			renda=0.15*(bruto-inss)-135;
		else if(bruto>=1800)
			renda=0.275*(bruto-inss)-360;
		else
			renda=0;
		
		liq=bruto-inss-renda;
		
		printf("\nSal�rio bruto: %.2f",bruto);
		printf("\nINSS: %.2f",inss);
		printf("\nImposta de renda: %.2f",renda);
		printf("\nSal�rio l�quido: %.2f",liq);
		
		printf("\n\nDesejar calcular outro sal�rio? [S/N] ");
		scanf("%s",&x);
		x=toupper(x);//converte minusculo para maiusculo
		if((x!='S')&&(x!='N')){
    		printf("Informa��o inv�lida!\nInforme S para sim e N n�o.\n");
    		printf("Desejar calcular outro sal�rio? [S/N] ");
    		scanf("%s", &x);
    		x=toupper(x);//converte minusculo para maiusculo
    		if((x!='S')&&(x!='N')){
    			printf("\nPara sair tecle qualquer tecla!");
    			exit(0);//interronpe o programa
			}
		}
		system("cls");
	}while(x=='S');
	
	return 0;
}
