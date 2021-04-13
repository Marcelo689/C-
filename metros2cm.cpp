#include <stdio.h>
#include <stdlib.h>

int main(void){
	float metros,centimetros;
	
	printf("Digite quantos metros  ");
	scanf("%f",&metros);
	
	centimetros = (metros*100);
	
	printf("O resultado em centimetros eh %.2f\n",centimetros);
	
	system("pause");
	return(0);
}
