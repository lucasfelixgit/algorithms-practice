#include <stdio.h>

int main(void){
	
	int n, cont;
	float soma, media;
	
	printf("Quantos numeros voce vai digitar? ");
	scanf("%d", &n);
	
	soma = 0;
	float vet[n];
	
	for(int i = 0; i < n; i++){
		printf("Digite um numero: ");
		scanf("%f", &vet[i]);
		
		soma += vet[i];
	}
	
	printf("\nVALORES:  ");
	
	for(int i = 0; i < n; i++){
		printf("%.1f ", vet[i]);
	}
	
	media = soma / n;
	
	printf("\nSOMA: %.2f ",soma );
	printf("\nMEDIA: %.2f", media);
	
	return 0;
}
