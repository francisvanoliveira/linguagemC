#include<stdio.h>
#include<stdlib.h>
#include<locale.h>//biblioteca para utilizar setlocale

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n, t1, t2, t3=0;
	
	printf("Informe o primeiro termo: ");
	scanf("%d",&t1);
	printf("Informe a segundo termo: ");
	scanf("%d",&t2);
	printf("Informe a quamtidade de termos: ");
	scanf("%d",&n);
	
	printf("%d - %d", t1, t2);
	
	for(int i=1; i<=n; i++){
		t3=t1+t2;
		printf(" - %d", t3);
		t1=t2;
		t2=t3;
	}
	return 0;
}
