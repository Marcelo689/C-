#include <stdlib.h>
#include <stdio.h>


int main (void){
	
	int valor1,valor2,resultado;
	char operacao;
	
	printf("digite o primeiro numero    ");
	scanf("%d",&valor1);
	
	printf("digite a operacao (+)(-)(/)(*)   ");
	scanf("%s",&operacao);
	
	if(operacao != '+' && operacao != '-' && operacao != '*' && operacao != '/'){
		printf("Voce digitou um operacao invalida ");
		return(0);
	}
	
	printf("digite o segundo numero    ");
	scanf("%d",&valor2);
	
	switch (operacao){
		case '+':
			resultado = valor1+valor2;
			break;
		case '-':
			resultado = valor1-valor2;
			break;
		case '*':
			resultado = valor1*valor2;
			break;
		case '/':
			resultado = valor1/valor2;
			break;
	}
	
	printf("Resultado da conta eh %d\n",resultado);
	
	
	system("pause");
	return(0);
}
