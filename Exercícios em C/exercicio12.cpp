/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e T�cnicas de Programa��o
* Professora: Ivana
* Aluno: Francisvan Oliveira Pessoa
*
* Supondo que a popula��o da cidade A � de 50.000 habitantes com uma taxa anual de crescimento de 3% e que a popula��o de uma cidade B � de 200.000 habitantes com uma taxa de crescimento de 1,5%.
* Fazer um programa que calcule e escreva o n�mero de anos necess�rios para que a popula��o da cidade A ultrapasse a da cidade B, mantidas essas taxas de crescimento. 
**************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	double a=50000, b=200000;
	int cont=0;
	
	while(a<b){
		a+=a*0.03;
		b+=b*0.015;
		cont++;
	}
	printf("----- RESULTADO -----\n\n");
	printf("Quantidade de anos: %d\n", cont);
}
