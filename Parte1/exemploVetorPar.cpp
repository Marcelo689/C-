#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int i,p=0,impar=0,vetor[4],vetorPar[4],vetorImpar[4];
	
	//Entrada da valores -Start
	for(i=0;i<4;i++){
		printf("Digite o valor no vetor[%d]\n",i);
		scanf("%d",&vetor[i]);
	}
	//Entrada de valores -End
	
	//Impressao de valores
	for(i=0;i<4;i++){
		if(vetor[i]%2 == 0){
			//printf("vetor[%d] = %d \n",i,vetor[i]);
			vetorPar[p]=vetor[i];
			p++;
		}else{
			vetorImpar[impar]=vetor[i];
			impar++;
		}
	}
	
	for(i=0;i<p;i++){
		printf("Par vetor[%d]= %d\n",i,vetorPar[i]);
	}
	for(i=0;i<impar;i++){
		printf("Impar vetor[%d]= %d\n",i,vetorImpar[i]);
	}
	
	system("pause");
	return(0);
}
