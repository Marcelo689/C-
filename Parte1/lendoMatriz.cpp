#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int i,j,tam,valorResultado[4][2];
	
	//tam = sizeof(valorResultado)/sizeof(int);
	tam = 4;
	printf("Tamanho do array %d\n",tam);
	
	valorResultado[0][0]=21;
	valorResultado[1][0]=3;
	valorResultado[2][0]=22;
	valorResultado[3][0]=1;
	
	valorResultado[0][1]=99;
	valorResultado[1][1]=88;
	valorResultado[2][1]=77;
	valorResultado[3][1]=55;
	
	for(i=0; i < 2;i++){
		for(j=0;j<=3;j++){
		printf("indice [%d] [%d] valor %d\n",j,i,valorResultado[j][i]);
		}
	}
	
	
	system("pause");
	return(0);
}
