/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e Técnicas de Programação
* Professora: Ivana
* Aluno: Francisvan Oliveira Pessoa
*
* Fazer um programa estatístico para um clube. Os valores serão fornecidos na seguinte ordem para cada sócio, 
* uma letra informativa do sexo (M ou F) e um número relativo à idade. O fim da lista será dado quando a letra do sexo não for um M ou F. 
* Ao final, informar o total de sócios, o total de homens, o total de mulheres, e a média de idade para cada sexo.
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
    	printf("Informação inválida!\nSe deseja continuar informe M ou F.\n");
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
    		printf("Informação inválida!\nSe deseja continuar informe M ou F.\n");
    		printf("Informe o sexo [M / F]: ");
    		scanf("%s", &sexo);
    		if((sexo!='M')&&(sexo!='F'))
    			continue;
		}
		
    }while((sexo=='M')||(sexo=='F'));
    
    system("cls");
    printf("----- RESULTADO -----\n\n");
    printf("Número de sócios: %d",cont);
    printf("\nHomens: %d",homem);
    printf("\nMédia idade: %.1f",(mih/homem));
    printf("\nMulher: %d",mulher);
    printf("\nMédia idade: %.1f",(mim/mulher));
    
    return 0;
}
