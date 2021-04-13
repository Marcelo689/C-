#include <stdio.h>
#include <stdlib.h>

int main(void){//executa e mostra na tela
    int a,b,soma;
    
    // inserindo o primeiro numero
    printf("Insira o numero\n");//mostra mensagem na tela 
    scanf("%d",&a);// insere o valor em a
    
    //inserindo o segundo numero
    printf("Insira outro numero\n");//mostra mensagem na tela
    scanf("%d",&b);//insere o valor em b
    
    //somando e printando valor
    soma =a+b;//efetua calculo
    printf("O valor da soma eh = %d \n",soma);//mostra resultado na tela
    
    system("pause");// para o sistema
    
    return(0);    //mostra enter para fechar a tela
    
}
