#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float peso_ideal(char sexo, float altura){
    float peso_ideal;
    
    switch(toupper(sexo)){ //toupper tranforma o caractere em maisculo
        case 'F': peso_ideal = altura * 62.1 - 44.7;
            break;
        case 'M': peso_ideal = altura * 72.7 - 58;
            break;
        default: printf("Sexo inválido! Digite F ou M \n");
            break;
    }
    return peso_ideal;
}

int main(){
    char sexo;
    float altura;
    //float peso;

    printf("Digite seu sexo: \n");
    scanf("%c", &sexo);
    printf("Digite sua altura (em metros): \n");
    scanf("%f", &altura);

    //peso = peso_ideal(sexo, altura);
    printf("Peso ideal: %2.f \n", peso_ideal(sexo, altura));

    return 0;
}