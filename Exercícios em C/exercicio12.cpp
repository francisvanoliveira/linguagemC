/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e Técnicas de Programação
* Professora: Ivana
* Aluno: Francisvan Oliveira Pessoa
*
* Supondo que a população da cidade A é de 50.000 habitantes com uma taxa anual de crescimento de 3% e que a população de uma cidade B é de 200.000 habitantes com uma taxa de crescimento de 1,5%.
* Fazer um programa que calcule e escreva o número de anos necessários para que a população da cidade A ultrapasse a da cidade B, mantidas essas taxas de crescimento. 
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
