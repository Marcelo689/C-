/// 1,3,4,6
//Busque o valor : 3(usuario digita)
//vetorDireita[0]= 1;
//vetorDireita[1]= 3;

//vetorDireita[0]= 43;
//vetorDireita[1]= 6;


#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int i,vetT=0,tam=4,resultado=1,vetD=0,busca,vetor[4],vetorDireita[4],vetorEsquerda[4];
	
	//Entrada da valores -Start
	for(i=0;i<4;i++){
		printf("Digite o valor no vetor[%d]\n",i);
		scanf("%d",&vetor[i]);
	}
	//Entrada de valores -End
	
	printf("Digite o valor a ser buscado\n");
	scanf("%d",&busca);
	
	// compara valor digitado com os existentes no vetor
	for(i=0;i<tam;i++){
	//	if(vetD == 0 ){
		
		vetorDireita[i]=vetor[i];
		//}
		if(vetor[i]== busca && vetD == 0){
			//printf("O valor %d estava na posicao %d   \n",busca,i);
			resultado = 2;
			vetD=1;
			vetT=i;
			tam=i;
		}
	}
	int contador=0;
	for(i=vetT;i<4;i++){
		vetorEsquerda[contador]=vetor[i];
		contador++;
	}
	for(i=0;i<vetT;i++){
		printf("O vetorDireita[%d] =%d\n",i,vetorDireita[i]);
	}
	for(i=0;i<4-vetT;i++){
		printf("O vetorEsquerda[%d] =%d\n",i,vetorEsquerda[i]);
	}
	//if(resultado == 1){
	//	printf("Bah... o valor %d nao foi encontrado \n",busca);
	//}
	system("pause");
	return(0);
}
