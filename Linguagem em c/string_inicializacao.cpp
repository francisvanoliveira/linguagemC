#include <stdio.h>
#include <string.h>
#include <string.h>

int main(){
    
    char s1[10] = {"Me"};
    char s2[10] = {"Salva"};

    //strcmp
    int cmp = strcmp(s1, s2);
    printf("strcmp: %d \n", cmp);

    //strcat
    strcat(s1, s2);
    printf("strcat: %s \n", s1);

    //strlen
    int len = strlen(s1);
    printf("strlen: %d \n", len);

    char copia[10];
    strcpy(copia, s1);
    printf("strcpy: %s \n", copia);

    //terceiro caractere
    printf("Terceiro caractere: %c", s1[2]);
   
    return 0;
}


//inicializacao
//char nome[4]={"Ana"}
//char nome[4]={'a','n','a'}
//o numero de caractere declarado sempre tem que contar com mais uma casa no fim para ser o finalizador. ex: nome[4]={"joao"}-> da erro, nome[4]={"ana"}-> tem 3 posicoes e o finalizador que da um total de 4 posicoes

//manipulacao
//Para manipular string é necessário incluir a biblioteca #include<string.h>
//strcpy(destino, origem) copia uma string para outra
//strcat(destino, origem) concatena a string destino+origem
//strlen(string) mostra o tamanho da string
//strcmp(s1, s2) compara a string, se forem iguais da como resposta 0
