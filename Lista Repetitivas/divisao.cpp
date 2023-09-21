#include <stdio.h>

int main(void){
	
	int n;
	float n1, n2, div;
	
	printf("Quantos casos voce vai digitar? ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		
		printf("\nEntre com o numerador: ");
		scanf("%f", &n1);
		printf("Entre com o denominador: ");
		scanf("%f", &n2);
		
		if(n2 == 0){
			printf("\nDIVISAO IMPOSSIVEL");
		}
		else {
			div = n1/n2;
			printf("\nDIVISAO: %.2f", div);
		}
	}
	
	return 0;
}
