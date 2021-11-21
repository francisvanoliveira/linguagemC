/*************************************************************************
* Faculdade: ESBAM
* Disciplina: Projeto de Algoritmo e Técnicas de Programação
* Professora: Ivana
* Aluno: Francisvan Oliveira Pessoa
*
* O número 3025 possui a seguinte característica:
* 30 + 25 = 55
* 55 2 = 3025
* Fazer um programa que pesquise e imprima todos os números de quatro dígitos que apresentam tal característica.
**************************************************************************/

#include <stdio.h>

int main(){
    int num=1000;
      
    while(num<=9999){
        if(num==(((num/100)+(num%100))*((num/100)+(num%100))))
            printf("%d: %d+%d=%d -> %d^2=%d \n",num,num/100,num%100,(num/100)+(num%100),(num/100)+(num%100),num);
    	num+=1;
    }
return 0;
}
