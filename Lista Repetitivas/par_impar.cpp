#include <stdio.h>

int main (void) {
	
	int n, num;
	
	printf("Quantos numeros voce vai digitar? ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		printf("\nDigite um numero: ");
		scanf("%d", &num);
		
		if(num > 0 && num % 2 == 0){
			printf("PAR POSITIVO");
		}
		else if(num < 0 && num % 2 == 0){
			printf("PAR NEGATIVO");
		}
		else if(num > 0 && num % 2 != 0){
			printf("IMPAR POSITIVO");
		}
		else if(num < 0 && num % 2 != 0){
			printf("IMPAR NEGATIVO");
		}
		else{
			printf("NULO");
		}
		
	}
	
	return 0;
}
