#include <stdio.h>

int main(void){
	
	int n, posMaior;
	float maior;
	
	printf("Quantos numeros voce vai digitar? ");
	scanf("%d", &n);
	
	float vet[n];
	
	for(int i = 0; i < n; i++){
		printf("Digite um numero: ");
		scanf("%f", &vet[i]);
	}
	
	maior = vet[0];
	posMaior = 0;
	
	for(int i = 0; i < n; i++){
		if (vet[i] > maior){
			maior = vet[i];
			posMaior = i;
		}
	}
	
	printf("\nMAIOR VALOR: %.1f", maior);
	printf("\nPOSICAO DO MAIOR VALOR: %d", posMaior);
	
	return 0;
	
}
