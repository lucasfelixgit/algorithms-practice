#include <stdio.h>

int main(void){
	
	int n, qtdHomens, qtdMulheres;
	float maior, menor, somaMulheres, mediaMulheres, media;
	
	printf("Quantas pessoas serao digitadas: ");
	scanf("%d", &n);
	
	float altura[n];
	char genero[n];
	
	for(int i = 0; i < n; i++){
		
		printf("Altura da %da pessoa: ", i + 1);
		scanf("%f", &altura[i]);
		
		printf("Genero da %da pessoa: ", i + 1);
		scanf("%c ", &genero[i]);
		fflush(stdin);
	}
	
	menor = altura[0];
	maior = altura[0];
	
	for(int i = 0; i < n; i++){
		
		if(altura[i] > maior) {
			maior = altura[i];
		}
	}
	
	for(int i = 0; i < n; i++){
		
		if(altura[i] < menor) {
			menor = altura[i];
		}
	}
	
	qtdHomens = 0;
	qtdMulheres = 0;
	somaMulheres = 0;
	
	for(int i = 0; i < n; i++){
		
		if(genero[i] == 'F'){
			somaMulheres += altura[i];
			qtdMulheres++;
		}
		else if(genero[i] == 'M'){
			qtdHomens++;
		}
	}
	
	media = (float)somaMulheres / qtdMulheres;
	
	printf("Menor altura: %.2f", menor);
	printf("\nMaior altura: %.2f", maior);
	printf("\nMedia das alturas das mulheres: %.2f", media);
	printf("\nNumero de homens: %d", qtdHomens);
	
	return 0;
}
