#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int i,j,tam,valorResultado[4][1];
	
	tam = sizeof(valorResultado)/sizeof(int);
	printf("Tamanho do array %d\n",tam);
	
	valorResultado[0][2]=21;
	valorResultado[1][2]=3;
	valorResultado[2][2]=22;
	valorResultado[3][2]=1;
	
	for(i=tam-1;i>=0;i--){
		printf("indice [%d] [%d] valor %d\n",i,2,valorResultado[i][2]);
	}
	
	
	system("pause");
	return(0);
}
