#include <stdlib.h>
#include <stdio.h>

int main(void){
	
	int i,j,valorMaior[4],valorMenor[4];
	
	valorMaior[0]=12;
	valorMaior[1]=3;
	valorMaior[2]=5;
	valorMaior[3]=56;
	
	valorMenor[0]=1;
	valorMenor[1]=0;
	valorMenor[2]=1;
	valorMenor[3]=2;
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			
			if((valorMaior[i]+ valorMenor[j])%2 ==0){
				printf("A soma de valorMaior[%d] = %d + valorMenor[%d]=%d eh Par\n",i,valorMaior[i],j,valorMenor[j]);
			}
		}
	}
	
	system("pause");
	return(0);
}
