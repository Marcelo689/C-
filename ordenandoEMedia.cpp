#include <stdlib.h>
#include <stdio.h>
#include <iostream>
int main(void){
	
	int i,j,valores[6],aux;
	int tamanho=(sizeof(valores)/sizeof(*valores));
	int media = (tamanho/2);
	
	///Insere valores no array pelo usuario
	for(i=1;i<7;i++){
		printf("Digite o numero %d ",i);
		scanf("%d",&valores[i]);
	}
	
	/// Ordena o array
	for(i=1;i<7;i++){
		for(j=1;j<7;j++){
			if(valores[i] < valores[j]){
				//troca as posicoes do menor e do maior valor comparado
				//quando o valores[i] for menor
				aux=valores[i];
				valores[i]=valores[j];
				valores[j]=aux;
			}
		}
	}
	// pega o item na media do array OBS(+1 porque o meu vetor incia no valores[1]
	aux=valores[media+1];
	
	//	printf("\nMedia %d",tamanho);
	printf("\nO valor na media eh %d",aux);
	
	system("pause");
	return(0);
}
