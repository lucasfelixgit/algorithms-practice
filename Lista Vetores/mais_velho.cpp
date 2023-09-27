#include <stdio.h>

int main(void){
	
	int n, maior, posMaior;
	
	printf("Quantas pessoas voce vai digitar? ");
	scanf("%d", &n);
	
	char nome[n][50];
	int idade[n];
	
	for(int i = 0; i < n; i++){
		printf("Dados da %da pessoa \n", i + 1);
		
		printf("Nome: ");
		fflush(stdin);
		fgets(nome[i], 50, stdin);
		fflush(stdin);
		
		printf("Idade: ");
		scanf("%d", &idade[i]);	
	}
	
	maior = idade[0];
	
	for(int i = 0; i < n; i ++){
		
		if(idade[i] > maior){
			maior = idade[i];
			posMaior = i;
		}
	}
	
	printf("\nPESSOA MAIS VELHA: %s", nome[posMaior]);
	
	return 0;
}
