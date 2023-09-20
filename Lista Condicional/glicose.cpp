#include <stdio.h>


int main(void){
	
	float glicose;
	
	printf("Digite a medida da glicose: ");
	scanf("%f", &glicose);
	
	if(glicose <= 100){
		printf("\nClassificacao: normal");
	}
	else if (glicose > 100 && glicose <= 140){
		printf("\nClassificacao: elevado");
	}
	else{
		printf("\nClassificacao: diabetes");
	}
}
