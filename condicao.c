#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int valorEntrada,valorComparacao=10;
	
	printf("Entre com o valor \n");
	scanf("%d",&valorEntrada);
	
	if(valorEntrada >= valorComparacao){
		printf("O valor eh maior que 10 \n");
	}else if(valorEntrada == 0){
		printf("O valor eh igual a zero");
	}else{
		printf("O valor eh menor ou = 10");
	}
	
	system("pause");
	return(0);
}
