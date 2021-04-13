/// 1,3,4,6
//Busque o valor : 3(usuario digita)
//Encontrei o valor 3 estava na posicao 1;

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int i,resultado=1,busca,vetor[4];
	
	//Entrada da valores -Start
	for(i=0;i<4;i++){
		printf("Digite o valor no vetor[%d]\n",i);
		scanf("%d",&vetor[i]);
	}
	//Entrada de valores -End
	
	printf("Digite o valor a ser buscado\n");
	scanf("%d",&busca);
	
	// compara valor digitado com os existentes no vetor
	for(i=0;i<4;i++){
		if(vetor[i]== busca){
			printf("O valor %d estava na posicao %d   \n",busca,i);
			resultado = 2;
		}
	}
	if(resultado == 1){
		printf("Bah... o valor %d nao foi encontrado \n",busca);
	}
	system("pause");
	return(0);
}
