#include <stdio.h>
#include <stdlib.h>
#include<locale.h>//biblioteca para utilizar setlocale

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num, div, resul=0;
	
	printf("Informe um n�mero inteiro: ");
	scanf("%d",&num);
	
	while(num>0){
		div=num%10;
		num/=10;
		resul+=div;
	}
	
	printf("Somat�ria dos digitos: %d",resul);
	return 0;
}
