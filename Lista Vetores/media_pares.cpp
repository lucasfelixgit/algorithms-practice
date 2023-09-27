#include <stdio.h>

int main(void){
	
	int n, cont, soma;
	float media;
	
	printf("Quantos elementos vai ter o vetor? ");
	scanf("%d", &n);
	
	int vet[n];
	
	for(int i = 0; i < n; i++){
		
		printf("Digite um numero: ");
		scanf("%d", &vet[i]);
		
		if(vet[i] % 2 == 0){
			soma += vet[i];	
			cont ++;
		}
	}
	
	if (cont == 0){
		printf("NENHUM NUMERO PAR");	
	}
	else {
		media = soma/cont;
		printf("MEDIA DOS PARES = %f", media);
	}
	
	return 0;
}
