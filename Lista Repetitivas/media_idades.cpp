#include <stdio.h>

int main(void){
	
	int num, soma, cont;
	float media;
	
	printf("Digite as idades: \n");
	scanf("%d", &num);
	
	soma = 0;
	cont = 0;
	
	while(num >= 0){
		soma += num;
		cont ++;
		scanf("%d", &num);
	}
	
	if (cont == 0){
		printf("IMPOSSIVEL CALCULAR");
	}
	else {
		media = soma/cont;
		printf("MEDIA = %.2f", media);
	}
	
	return 0;
	
}
