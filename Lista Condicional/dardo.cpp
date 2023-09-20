#include <stdio.h>

int main(void){
	
	float d1, d2, d3;
	
	printf("Digite as tres distancias: \n");
	scanf("%f", &d1);
	scanf("%f", &d2);
	scanf("%f", &d3);
	
	if(d1 > d2 && d1 > d3){
		printf("MAIOR DISTANCIA = %.2f", d1);
	}
	else if(d2 > d3){
		printf("MAIOR DISTANCIA = %.2f", d2);
	}
	else {
		printf("MAIOR DISTANCIA = %.2f", d3);
	}
}
