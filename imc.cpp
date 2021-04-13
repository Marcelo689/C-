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
	float altura,peso,imc;
	
	printf("Digite sua altura: ");
	scanf("%f",&altura);
	
	printf("Digite seu peso: ");
	scanf("%f",&peso);
	
	imc=(peso/(altura*altura));
	
	if(imc < 18.5){
		printf("Magreza extrema\n");
	}else if(imc>18.5 && imc<=24.9){
		printf("Peso normal\n");
	}else if(imc>=25 && imc <=29.9){
		printf("Sobrepeso grau 1\n");
	}else if(imc>=30 && imc<=39.9){
		printf("Obesidade grau 2\n");
	}else if(imc>=40){
		printf("Obesidade Grave 3\n");
	}
	printf("O valor do seu imc foi %.2f\n",imc);
	system("pause");
	return(0);
}
