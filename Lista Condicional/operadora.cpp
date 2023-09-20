#include <stdio.h>

int main(void){
	
	int minutos;
	float valor;
	
	printf("Digite a quantidade de minutos: ");
	scanf("%d", &minutos);
	
	if(minutos > 100){
		valor = 50 + ((minutos-100) * 2);
	}
	else{ 
	    valor = 50;
	}
	
	printf("\nValor a pagar: $ %.2f", valor);
}
