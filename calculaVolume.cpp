#include <stdio.h>
#include <stdlib.h>

int main(void){
	float altura,largura,comprimento,volume;
	
	printf("Digite a altura   ");
	scanf("%f",&altura);
	
	printf("Digite a largura   ");
	scanf("%f",&largura);
	
	printf("Digite o comprimento   ");
	scanf("%f",&comprimento);
	
	volume = (altura*largura*comprimento);
	
	printf("O valor da area eh %.2f",volume);
	
	return(0);
}
