#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ALUNO 5
#define NOTA 3


int main(){
   
   int linha, coluna;
   float notas[ALUNO][NOTA];
   float maior;

   //preencher matriz
   for(linha=0; linha < ALUNO; linha++){
       for(coluna=0; coluna < NOTA; coluna++){
           notas[linha][coluna] = rand() % 10 +1;
       }
   }

   //printar matriz
   for(linha=0; linha < ALUNO; linha++){
       for(coluna=0; coluna < NOTA; coluna++){
           printf("%.2f \t", notas[linha][coluna]);
       }
       printf("\n");
   }

   for(linha=0; linha < ALUNO; linha++){
       maior = notas[linha][0];
       for(coluna = 1; coluna < NOTA; coluna++){
           if(notas[linha][coluna] > maior)
                maior = notas[linha][coluna];     
       }
       printf("Maior do aluno %d: %.2f \n", linha, maior);
   }

   return 0;
}