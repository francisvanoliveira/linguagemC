/*7.	Fazer um programa para verificar se um número lido é número perfeito. 
Número perfeito é aquele que é igual a soma dos seus divisores. 
Por exemplo: 6 = 1 + 2 + 3
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	
    int n,i,res=0;
    
    printf("Informe um valor: ");
    scanf("%d",&n);
    
    for(i=1; i<n; i++){
    	if(n%i==0)
		res+=i;	    	
	}
	system("cls");
	printf("-------- RESULTADO --------\n");
	if (res==n)
		printf("O número %d é perfeito!", n);
	else
		printf("O número %d não é perfeito!", n);
		
	return 0;
}
