/*7.	Fazer um programa para verificar se um n�mero lido � n�mero perfeito. 
N�mero perfeito � aquele que � igual a soma dos seus divisores. 
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
		printf("O n�mero %d � perfeito!", n);
	else
		printf("O n�mero %d n�o � perfeito!", n);
		
	return 0;
}
