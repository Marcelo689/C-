#include <stdlib.h>
#include <stdio.h>

int main(void){
	
	int i,valores[6],menor=0;
	
	for(i=1;i<7;i++){
		printf("Digite o numero %d ",i);
		scanf("%d",&valores[i]);
	}
	for(i=1;i<7;i++){
		if(valores[i] < menor){
			menor =valores[i];
		}
	}
	printf("O menor valor eh %d",menor);
	
	return(0);
}
