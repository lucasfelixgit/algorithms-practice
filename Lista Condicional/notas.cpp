#include <stdio.h>

int main(void){
	
	float nota1, nota2, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	media = nota1 + nota2;
	
	printf("\nNOTA FINAL: %.2f", media);
	
	if(media < 60){
		printf("\nREPROVADO.");
	}
}
