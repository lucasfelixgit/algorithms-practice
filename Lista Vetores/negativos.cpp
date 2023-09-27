#include <stdio.h> 

int main(void){
	
	int n, vet[10];
	
	printf("Quantos numeros voce vai digitar? ");
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++){
		printf("Digite um numero: ");
		scanf("%d", &vet[i]);
	}
	
	printf("NUMEROS NEGATIVOS: \n");
	
	for(int i = 0; i < n; i++){
		if(vet[i] < 0){
			printf("\n%d\n", vet[i]);
		}
	}
}
