/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e T�cnicas de Programa��o
* Professora: Ivana
* Aluno: Francisvan Oliveira Pessoa
*
* Fazer um programa estat�stico para um clube. Os valores ser�o fornecidos na seguinte ordem para cada s�cio, 
* uma letra informativa do sexo (M ou F) e um n�mero relativo � idade. O fim da lista ser� dado quando a letra do sexo n�o for um M ou F. 
* Ao final, informar o total de s�cios, o total de homens, o total de mulheres, e a m�dia de idade para cada sexo.
**************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int id, cont=0, homem=0, mulher=0;
	float mih=0, mim=0;
	char sexo;
		
	printf("Informe o sexo [M / F]: ");
    scanf("%s", &sexo);
    sexo=toupper(sexo);//converte minusculo para maiusculo
    if((sexo!='M')&&(sexo!='F')){
    	printf("Informa��o inv�lida!\nSe deseja continuar informe M ou F.\n");
    	printf("Informe o sexo [M / F]: ");
    	scanf("%s", &sexo);
    	if((sexo!='M')&&(sexo!='F')){
    		printf("\nPara sair tecle qualquer tecla!");
    		exit(0);//interronpe o programa
		}
	}
	
	do{
		printf("Informe a idade: ");
		scanf("%d",&id);
		
		cont++;
		
		if(sexo=='M'){
			homem++;
			mih+=id;
		}
		else{
			mulher++;
			mim+=id;
		}
		
		printf("Informe o sexo [M / F]: ");
    	scanf("%s", &sexo);
    	sexo=toupper(sexo);
    	if((sexo!='M')&&(sexo!='F')){
    		printf("Informa��o inv�lida!\nSe deseja continuar informe M ou F.\n");
    		printf("Informe o sexo [M / F]: ");
    		scanf("%s", &sexo);
    		if((sexo!='M')&&(sexo!='F'))
    			continue;
		}
		
    }while((sexo=='M')||(sexo=='F'));
    
    system("cls");
    printf("----- RESULTADO -----\n\n");
    printf("N�mero de s�cios: %d",cont);
    printf("\nHomens: %d",homem);
    printf("\nM�dia idade: %.1f",(mih/homem));
    printf("\nMulher: %d",mulher);
    printf("\nM�dia idade: %.1f",(mim/mulher));
    
    return 0;
}
