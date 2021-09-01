#include <stdio.h>
#include <string.h>

int main(){
    int array[5] = {3, 5, 1, 4, 2};
    int x, y, j, aux, posmenor, menor;

    printf("Array fora de ordem: \n");
    for(x=0; x<5; x++){
        printf("%d\t", array[x]);
    }

    for(x=0; x<5; x++){
        menor = array[x];
        posmenor = x;

        for(y=x+1; y<5; y++){
            if(array[y] < menor){
                menor = array[y];
                posmenor = y;
            }
        }
        if(posmenor != x){
            aux = array[x];
            array[x] = array[posmenor];
            array[posmenor] = aux;
        }
    }

    printf("Array em oredem: \n");
    for(j=0; j<5; j++){
        printf("%d\t", array[j]);
    }
}