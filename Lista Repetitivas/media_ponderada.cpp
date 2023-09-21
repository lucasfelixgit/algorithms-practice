#include <stdio.h>

int main (void) {
	
	int n;
	float num1, num2, num3, media;
	
	printf("Quantos casos voce vai digitar? ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++){
		printf("Digite tres numeros: \n");
		scanf("%f", &num1);
		scanf("%f", &num2);
		scanf("%f", &num3);
		
		media = ((num1 * 2) + (num2 * 3) + (num3 * 5))/10;
		
		printf("\nMEDIA = %.2f\n", media);
	}
	
	return 0;
}
