#include <stdio.h>

int main(void){
	
	int n, num, contD, contF;
	
	printf("Quantos numeros voce vai digitar? ");
	scanf("%d", &n);
	
	for(int i = 1 ; i <= n; i++){
		
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if(num > 10 && num < 20){
			contD++;
		}
		else{
			contF++;
		}
		
	}
	
	printf("DENTRO: %d", contD);
	printf("\nFORA: %d", contF);
	
}
