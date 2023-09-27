#include <stdio.h>

int main(void){
	
	int n, cont;
	float somaAltura, media, percent;
	
	printf("Quantas pessoas serao digitadas? ");
	scanf("%d", &n);
	
	char nome[n][50];
	int idade[n];
	float altura[n];
	
	somaAltura = 0;
	cont = 0;
	
	for(int i = 0; i < n ; i++){
		
		printf("\nDados da %da pessoa\n", i + 1);
		
		printf("Nome: ");
		fflush(stdin);
		fgets(nome[i], 50, stdin);
		fflush(stdin);
		
		printf("Idade: ");
		scanf("%d", &idade[i]);
		
		if (idade[i] < 16){
			cont++;
		}
		
		printf("Altura: ");
		scanf("%f", &altura[i]);
		
		somaAltura += altura[i];
	}
	
	media = somaAltura / n;
	percent = ((float)cont/n)*100.0;
	
	printf("\nAltura media: %.2f", media);
	printf("\nPessoas com menos de 16 anos: %.1f%", percent);
	
	for(int i = 0; i < n; i++){
		if(idade[i] < 16){
			printf("\n%s", nome[i]);
		}
	}
	
	return 0;
	
}
