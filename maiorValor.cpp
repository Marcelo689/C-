//implemente um algoritmo que entre com 6 valores
// e encontre o maior valor
// saida // o maior valor  eh:XXX//

#include <stdlib.h>
#include <stdio.h>

int main(void){
	
	int i,valores[6],maior=0;
	
	for(i=1;i<7;i++){
		printf("Digite o numero %d ",i);
		scanf("%d",&valores[i]);
	}
	for(i=1;i<7;i++){
		if(valores[i] > maior){
			maior=valores[i];
		}
	}
	printf("O maior valor eh %d",maior);
	
	return(0);
}
