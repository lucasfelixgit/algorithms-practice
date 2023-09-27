#include <stdio.h>

int main(void){
	
	int n;
	float media;
	
	printf("Quantos alunos serao digitados? ");
	scanf("%d", &n);
	
	char nomes[n][50];
	float notas1[n];
	float notas2[n];
	
	for(int i = 0; i < n; i++){
		
		printf("Digite nome, primeira e segunda nota do %do aluno: \n", i+1);
		
		fflush(stdin);
		fgets(nomes[i], 50, stdin);
		fflush(stdin);
		scanf("%f", &notas1[i]);
		scanf("%f", &notas2[i]);
	}
	
	printf("Alunos Aprovados: \n");
	
	for(int i = 0; i < n; i++){
		
		media = ((float)notas1[i] + notas2[i]) / 2;
		
		if(media >= 6.0){
			printf("%s\n", nomes[i]);
		}
	}
	
	return 0;
}
