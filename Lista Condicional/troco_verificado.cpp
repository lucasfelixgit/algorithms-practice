#include <stdio.h>

int main(void){
	
	int qtd;
	float preco, recebido, pfinal, troco, falta;
	
	printf("Preco unitario do produto: ");
	scanf("%f", &preco);
	printf("Quantidade comprada: ");
	scanf("%d", &qtd);
	printf("Dinheiro recebido: ");
	scanf("%f", &recebido);
	
	pfinal = preco * qtd;
	
	if(pfinal <= recebido){
		troco = recebido - pfinal;
		printf("\nTROCO = %.2f", troco);
	}
	else {
		falta = pfinal - recebido;
		printf("\nDINHEIRO INSUFICIENTE. FALTAM %.2f REAIS", falta);
	}
}
