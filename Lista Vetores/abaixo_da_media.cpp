#include <stdio.h>

int main(void){
	
	int n;
	float soma, media;
	
	printf("Quantos elementos vai ter o vetor? ");
	scanf("%d", &n);

	float vet[n];
	
	for(int i = 0; i < n; i ++){
		printf("Digite um numero: ");
		scanf("%f", &vet[i]);
		
		soma += vet[i];
	}
	
	media = soma/n;
	
	printf("\nMEDIA DO VETOR = %.3f", media);
	printf("\nELEMENTOS ABAIXO DA MEDIA: \n");
	
	for (int i = 0; i < n; i ++){
		
		if(vet[i] < media){
			printf("%.1f\n", vet[i]);
		}
	}
	
	return 0;
}
