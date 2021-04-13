#include <stdio.h>
#include <stdlib.h>

// IMC 	Classificação 	Obesidade (grau)
// Menor que 18,5 	Magreza 	0
// Entre 18,5 e 24,9 	Normal 	0
// Entre 25,0 e 29,9 	Sobrepeso 	I
// Entre 30,0 e 39,9 	Obesidade 	II
// Maior que 40,0 	Obesidade Grave 	III

/// formula do imc IMC = Peso ÷ (Altura × Altura)
int main(void){
	
	float peso,altura,imc;
	
	printf("Digite seu peso\n");
	scanf("%f",&peso);
	
	printf("Digite sua altura\n");
	scanf("%f",&altura);
	
	imc = (peso/(altura*altura));
	
	if(imc<18.5){
		printf("Magreza extrema\n");
	}else
	if(imc>=18.5 && imc <= 24.9){
		printf("Peso normal\n");
	}else
	if(imc>=25.0 && imc <= 29.9){
		printf("Sobrepeso");
	}else
	if(imc>=30 && imc <=39.9){
		printf("Obesidade grau 2");
	}
	if(imc>=40){
		printf("Obesidade grave");
	}
	
	printf("Seu valor de imc eh %.2f",imc);
	
	
	return(0);
}
