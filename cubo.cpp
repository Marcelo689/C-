#include <stdio.h>
#include <stdlib.h>

int main(void){
	int valor,resultado;
	
	printf("Digite um numero para ser elevado ao cubo \n");
	scanf("%d",&valor);
	
	resultado = (valor*valor*valor);
	
	printf("O valor do cubo de %d eh %d",valor,resultado);
	
	
	return(0);
}
