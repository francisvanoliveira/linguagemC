/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e T�cnicas de Programa��o
* Professora: Ivana
* Aluno: Francisvan Oliveira Pessoa
*
* Fazer um programa para ler as notas de um concurso, inicialmente n�o se sabe o n�mero de candidatos. 
* a m�dia aritm�tica, a maior nota lida e a menor nota lida. 
* Tratar adequadamente quando for lista vazia, o primeiro valor for negativo.
**************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float nota, maior, menor, md=0, media;
	int cont=0;
	
	printf("Digite a primeira nota: ");
    scanf("%f", &nota);
    if(nota<0){
    	printf("Foi informado um valor negativo!\nSe deseja continuar informe uma notva v�lida.\n");
    	printf("Digite a primeira nota: ");
    	scanf("%f", &nota);
    	if(nota<0){
    		printf("\nPara sair tecle qualquer tecla!");
    		exit(0);//interronpe o programa
		}
	}
	
	maior=nota;
	menor=nota;
	
	do{
		cont++;
		md+=nota;
		if(nota>maior)
			maior=nota;
		if(nota<menor)
			menor=nota;
	   	printf("Digite a primeira nota: ");
		scanf("%f", &nota);
    	if(nota<0){
    		printf("Foi informado um valor negativo!\nSe deseja continuar informe uma notva v�lida.\n");
    		printf("Digite a primeira nota: ");
    		scanf("%f", &nota);
    		if(nota<0)
    			continue;//sai do la�o
		}
		
    }while(nota>0);
    
    system("cls");
    printf("----- RESULTADO -----\n\n");
    printf("N�meros de candidatos: %d",cont);
    printf("\nM�dia nota: %.2f",(md/cont));
    printf("\nMaior nota: %.2f",maior);
    printf("\nMenor nota: %.2f",menor);
}
