#include <stdio.h>


int main(void){
	
	int codigo, contA, contG, contD;
	
	
	printf("Informe um codigo (1,2,3) ou 4 para parar: ");
	scanf("%d", &codigo);
	
	contA = 0;
	contG = 0;
	contD = 0;
	
	while(codigo != 4){
		
		if(codigo == 1){
			contA++;
		}
		else if(codigo == 2){
			contG++;
		}
		else if(codigo == 3){
			contD++;
		}
		
		printf("Informe um codigo (1,2,3) ou 4 para parar: ");
		scanf("%d", &codigo);
	}
	
	printf("MUITO OBRIGADO");
	printf("\nAlcool: %d", contA);
	printf("\nGasolina: %d", contG);
	printf("\nDiesel: %d", contD);
	
	return 0;
}
