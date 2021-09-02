#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arq;
    char buffer[50];
    int i;

    printf("Escrita \n\n");

    if(!(arq = fopen("C:\\Users\\franc\\Desktop\\Linguagem em c\\arq.txt", "w")))
        printf("Erro! \n");
    else{
        sprintf(buffer, "Numeros de 1 a 10 \n");
        fputs(buffer, arq);
        for(i=0; i<=10; i++){
            fprintf(arq, "%d \n", i);
        }
        printf("Sucesso! \n\n");
    }
    fclose(arq);

    printf("Leitura \n\n");

    char *titulo[40];
    int numeros[10];

    if(!(arq = fopen("C:\\Users\\franc\\Desktop\\Linguagem em c\\arq.txt", "r")))
        printf("Erro! \n");
    else{
        fgets(&titulo, 40, arq);
        printf("Titulo: %s", titulo);
        for(i=0; i<10; i++){
            fscanf(arq, "%d", &numeros[i]);
            printf("%d \n", numeros[i]);
        }
    }
    fclose(arq);
    
    return 0;
}