//Implemente um algoritmo que mostre na tela 10 posicoes de um vetor
#include <stdio.h>
#include <stdlib.h>


int main(void){
	
	int vetor[10],i;
	
	for(i=0;i<10;i++){
		printf("\nDigite o valor no vetor[%d] =",i);
		scanf("%d",&vetor[i]);
	}
	for(i=0;i<10;i++){
		printf("o indice %d contem o valor %d\n",i,vetor[i]);
	}
	system("pause");
	return(0);
}
