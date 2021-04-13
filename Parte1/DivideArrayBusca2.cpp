/// 1,3,4,6
//Busque o valor : 3(usuario digita)
//vetorDireita[0]= 43;
//vetorDireita[1]= 6;

//vetorDireita[0]= 1;
//vetorDireita[1]= 3;


#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int i,vetT=0,tam=4,resultado=1,flag=0,busca,vetor[4],vetorDireita[4],vetorEsquerda[4];
	
	//Entrada da valores -Start
	for(i=0;i<4;i++){
		printf("Digite o valor no vetor[%d]\n",i);
		scanf("%d",&vetor[i]);
	}
	//Entrada de valores -End
	
	printf("Digite o valor a ser buscado\n");
	scanf("%d",&busca);
	
	int contadorE=0;
	// compara valor digitado com os existentes no vetor
	for(i=0;i<tam;i++){
		if(flag == 0 ){
		
		vetorEsquerda[i]=vetor[i];
		contadorE++;
		}
		if(vetor[i]== busca){
			
			flag=1;
		}
	}
	
	int contador=0;
	int contadorD=0;
	for(i=contadorE;i<4;i++){
		vetorDireita[contador]=vetor[i];
		contador++;
		contadorD++;
	}
	
	for(i=0;i<contadorD;i++){
		printf("O vetorDireita[%d] =%d\n",i,vetorDireita[i]);
	}
	for(i=0;i<contadorE;i++){
		printf("O vetorEsquerda[%d] =%d\n",i,vetorEsquerda[i]);
	}
	//if(resultado == 1){
	//	printf("Bah... o valor %d nao foi encontrado \n",busca);
	//}
	system("pause");
	return(0);
}
