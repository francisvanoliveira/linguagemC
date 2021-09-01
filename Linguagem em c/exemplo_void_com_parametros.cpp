#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void peso_ideal(char sexo, float altura){
    float peso_ideal;
    
    switch(toupper(sexo)){
        case 'F': peso_ideal = altura * 62.1 - 44.7;
            break;
        case 'M': peso_ideal = altura * 72.7 - 58;
            break;
        default: printf("Sexo inválido! Digite F ou M \n");
            break;
    }
    printf("Peso ideal: %2.f \n", peso_ideal);
}

int main(){
    char sexo;
    float altura;

    printf("Digite seu sexo: \n");
    scanf("%c", &sexo);
    printf("Digite sua altura (em metros): \n");
    scanf("%f", &altura);

    peso_ideal(sexo, altura);

    return 0;
}