#include <stdio.h>

int main(void){
	
	char escolha;
	float temperatura, celsius, fahrenheit;
	
	printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
	scanf("%c", &escolha);
	
	if (escolha == 'F'){
		printf("Digite a temperatura em Fahrenheit: ");
		scanf("%f", temperatura);
		
		celsius = (temperatura - 32) / 1.8;
		printf("Temperatura equivalente em Celsius: %.2f ", celsius);
		
	}
	else if(escolha == 'C'){
		printf("Digite a temperatura em Celsius: ");
		scanf("%f", temperatura);
		
		fahrenheit = temperatura * 1.8 + 32;
		printf("Temperatura equivalente em Fahrenheit: %.2f ", fahrenheit);
	}
	else{
		printf("INVALIDO");
	}
	
	return 0;
}
