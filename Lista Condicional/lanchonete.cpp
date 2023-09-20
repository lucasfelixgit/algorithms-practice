#include <stdio.h>


int main(void){
		
	int codigo, qtd;
	float pfinal;
	
	printf("Codigo do produto comprado: ");
	scanf("%d", &codigo);
	printf("Quantidade Comprada: ");
	scanf("%d", &qtd);
	
	switch(codigo){
		case 1:
			pfinal = qtd * 5;
		break;
		
		case 2:
			pfinal = qtd * 3.50;
		break;
		
		case 3:
			pfinal = qtd * 4.80;
		break;
		
		case 4:
			pfinal = qtd * 8.90;
		break;
		
		case 5: 
			pfinal = qtd * 7.32;
		break;
		
		default:
			printf("Codigo Invalido");
		break;
	}
	
	printf("Valor a pagar: R$ %.2f", pfinal);
	
	return 0;
	
}
