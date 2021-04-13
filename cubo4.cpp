//implemente um algoritmo que entre com 4 valores
//mostre os valores ao cubo da entrada digitada

#include <stdlib.h>
#include <stdio.h>

int main(void){
	int valorE[4];
	int i,cubo;
	for(i=1;i<5;i++){
	printf("Digite um valor %d que sera elevado ao cubo  \n",i);
	scanf("%d",&valorE[i]);	
	}
	for(i=1;i<5;i++){
		cubo = (valorE[i]*valorE[i]*valorE[i]);
		printf("O cubo do valor[%d] eh %d\n",i,cubo);
	}
	
	
	system("pause");
	return(0);
}
