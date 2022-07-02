#include<stdio.h>
#include<stdlib.h>
#define L 2
#define C 2



int main(){
	int matriz[L][C];
    int linPar=1, linImp=0, colPar=0, colImp=0;
	int i, j, cont=0, aux;
	float num;

    printf("****** INICIANDO MATRIZ *******\n\n");
    for ( i = 0; i < (L*C); ++i){
        cont=0;
        do{
            do{
				printf("Digite uma valor inteiro: ");
				scanf("%f",&num);
				aux=num;
				if(aux!=num || num < 0){
					printf("Valor inválido. Digite um valor inteiro!\n");
					scanf("%f",&num);
					aux=num;
				}
			}while(aux!=num || num < 0);
            if(aux%2==0){
                if(colPar==C){
                    linPar+=2;
                    colPar=0;
                }
                if(linPar > L){
                    printf("\n -> Matriz completa para numeros Pares!");
                }else{
                    matriz[linPar][colPar] = aux;
                    printf("\n -> Numero par! Inserido em linha [%d] coluna [%d]\n", linPar+1, colPar+1);
                    colPar++;
                    cont=1;
                }   
            }else{
                if(colImp==C){
                    linImp+=2;
                    colImp=0;
                }
                if(linImp > L){
                    puts("\n -> Matriz completa para numeros Impares!\n");
                }else{
                    matriz[linImp][colImp] = aux;
                    printf("\n -> Numero impar! Inserido em linha [%d] coluna [%d]\n", linImp+1, colImp+1);
                    colImp++;
                    cont=1;
                }
            }
        }while(cont==0);
    }
    
	printf("\n\n****** MATRIZ ******\n");
    for ( i = 0; i < L; ++i){
        for ( j = 0; j < C; ++j){
            printf("[ %d ]",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

