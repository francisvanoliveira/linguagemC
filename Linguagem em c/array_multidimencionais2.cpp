#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ALUNO 5
#define NOTA 3
#define ESCOLA 2


int main(){
   
   int linha, coluna, prof;
   float notas[ALUNO][NOTA][ESCOLA];
   float maior;

   //preencher matriz
   for(prof=0; prof < ESCOLA; prof++){
       for(linha=0; linha < ALUNO; linha++){
            for(coluna=0; coluna < NOTA; coluna++){
                notas[linha][coluna][prof] = rand() % 10 +1;
            }
        }
    }

   

   //printar matriz
   for(prof=0; prof < ESCOLA; prof++){
       for(linha=0; linha < ALUNO; linha++){
            for(coluna=0; coluna < NOTA; coluna++){
                printf("%.2f \t", notas[linha][coluna][prof]);
            }
            printf("\n");
        }
        printf("\n");
    }

   for(prof=0; prof < ESCOLA; prof++){
       for(linha=0; linha < ALUNO; linha++){
            maior = notas[linha][0][prof];
            for(coluna = 1; coluna < NOTA; coluna++){
                if(notas[linha][coluna][prof] > maior)
                    maior = notas[linha][coluna][prof];     
            }
            printf("Maior do aluno %d da escola %d: %.2f \n", linha, prof, maior);
        }
    }

   return 0;
}