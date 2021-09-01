#include <stdio.h>
#include <stdlib.h>

void linha(){
    int i;

    for(i=0; i<=25; i++){
        printf("*");
    }
    printf("\n");
}

int main(){
    int i;
    
    linha();
    printf("Numeros de 1 a 10: \n");
    for(i=0; i<=10; i++){
        printf("%d ", i);
    }
    printf("\n");
    linha();

    return 0;
}