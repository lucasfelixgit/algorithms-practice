#include <stdio.h>

int main (void){
	
	int num, soma;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	while(num != 0){
		
		if(num % 2 == 0){
			soma = num*5 + 20;
		}
		else{
			soma = (num+1)*5 +20;
		}
		
		printf("SOMA = %d", soma);
		printf("\nDigite um numero inteiro: ");
		scanf("%d", & num);
	}
}
