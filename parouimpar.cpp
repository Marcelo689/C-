//implemente um algoritmo que receba 10 valores
//mostre os valores que sao pares e some os valores
//que sao impares

#include <stdlib.h>
#include <stdio.h>

int main(void){
	
	int valores[10],i;
 	int impar=0;
	for(i=1;i<11;i++){
		printf("Digite o valor[%d]=",i);
		scanf("%d",&valores[i]);
	}
	printf("Os valores pares sao\n");
	for(i=1;i<11;i++){
		if(valores[i] % 2 == 0){
			printf("%d = %d\n",i,valores[i]);
		}else{
			//printf("valor impar= %d\n",valores[i]);
			impar += valores[i];
		}
	}
	printf("A soma dos impares eh %d\n",impar);
	system("pause");
	return(0);
}
