#include <stdlib.h>
#include <stdio.h>


int main(void){
	
	int i,j,vetor[6],aux;
	
	vetor[0]=4;
	vetor[1]=200;
	vetor[2]=2;
	vetor[3]=8;
	vetor[4]=9;
	vetor[5]=100;
	
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(vetor[i] < vetor[j]){
			
				aux=vetor[i];
				vetor[i]=vetor[j];
				vetor[j]=aux;
			}
		}
	}
	for(i=0;i<6;i++){
		printf("valor[%d]=%d\n",i,vetor[i]);
	}
	
	return(0);
}
