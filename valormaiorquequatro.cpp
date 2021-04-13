#include <stdlib.h>
#include <stdio.h>

int main(void){
	int i,input[6];
	
	printf("Digite 6 numeros \n");
	for(i=1;i<7;i++)
	{
		printf("Digite o %d numero\n",i);
		scanf("%d",&input[i]);
	}
	printf("Os numeros que voce digitou maiores de 4 sao :\n");
	for(i=0;i<6;i++){
		
		if(input[i] > 4){
			printf("%d,",input[i]);
		}
	}
	printf("\n");
	system("pause");
	return(0);
}
