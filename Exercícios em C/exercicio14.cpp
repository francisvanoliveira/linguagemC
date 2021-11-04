/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e Técnicas de Programação
* Professora: Ivana
* Aluno: Francisvan Oliveira Pessoa
*
* 1Anacleto tem 1,50m e cresce 2 centímetros por ano, enquanto Felisberto tem 1,10 e cresce 3 centímetros por ano. 
* Construa um programa que calcule e apresente quantos anos serão necessários para que Felisberto seja maior que Anacleto.
**************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float a=150, f=110;
	int cont=0;
	
	while(f<a){
		a+=2;
		f+=3;
		cont++;
	}
	printf("----- RESULTADO -----\n\n");
	printf("Quantidade de anos: %d\n", cont);
}
