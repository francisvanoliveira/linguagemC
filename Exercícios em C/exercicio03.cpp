/*Fazer um programa para achar a série bergamacci dos n primeiros termos.
1   1   1   3   5   9   17 ...
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>//biblioteca para utilizar setlocale

int main (){
	setlocale(LC_ALL,"Portuguese");
	
	int t1=1, t2=1, t3=1, t4, n, i;
	
	printf("-------------------------");
	printf("\nSEQUENCIA BERGAMACCI");
	printf("\n-------------------------\n\n");
	printf("Quantos termos você quer mostrar: ");
	scanf("%d",&n);
	
	system("cls");//limpar tela
	
	if(n<=0){
		printf("Valor inválido!");
	}else{
		printf("------- RESULTADO -------\n");
		printf("\n%d - %d - %d", t1, t2, t3);
	
		for(i=4; i<=n; i++){
			t4=t1+t2+t3;
			printf("- %d ", t4);
			t1=t2;
			t2=t3;
			t3=t4;			
		}//fim for		
	}//fim elser
	
	return 0;
}
