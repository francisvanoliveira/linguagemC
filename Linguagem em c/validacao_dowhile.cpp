/*Calcular e informar a soma de 2 valores*/
#include <stdio.h>
#include <string.h>

int main(){
    int valor1=0, valor2=0, soma=0;

    do {
        printf("Digite o peimeiro valor: ");
        scanf("%d", &valor1);
        printf("Digite o segundo valor: ");
        scanf("%d", &valor2);
    }while(valor1<0 || valor2<0);
    
    soma = valor1+valor2;
    printf("O resultado da soma e: %d", soma);
   
   
    return 0;
}