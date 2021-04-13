#include <stdlib.h>
#include <stdio.h>

int main(void){
	
	int i,j,valores[6],valorMaior,valorMenor;
	
	for(i=1;i<7;i++){
		printf("Digite o numero %d ",i);
		scanf("%d",&valores[i]);
	}
	
	for(i=1;i<2;i++){
		valorMaior=valores[i];
		valorMenor=valores[i];
		for(j=1;j<7;j++){
			if(valorMaior<valores[j]){
				valorMaior=valores[j];
			}
			if(valorMenor>valores[j]){
				valorMenor=valores[j];
			}
		}
	}
	printf("O maior valor eh %d\n",valorMaior);
	printf("O menor valor eh %d\n",valorMenor);	
	return(0);
}
