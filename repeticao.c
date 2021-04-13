#include <stdio.h>
#include <stdlib.h>

int main(void){
	int valor[4],i;
	
	valor[0]=23;
	valor[1]=2;
	valor[2]=1;
	valor[3]=5;
	valor[4]=10;
	
	for(i =0;i<valor;i++){
		printf("o indice %d contem o valor %d\n",i,valor[i]);
	}
	system("pause");
	return(0);
}
