#include <stdio.h>

int main(void){
	
	int a, b, c, menor;
	
	printf("Primeiro: ");
	scanf("%d", &a);
	printf("Segundo: ");
	scanf("%d", &b);
	printf("Terceiro: ");
	scanf("%d", &c);
	
	if (a < b && a < c){
		menor = a;
	}
	else if (b < c){
		menor = b;
	}
	else{
		menor = c;
	}	
	
	printf("\nMENOR: %d", menor);
	
	return 0;
}
