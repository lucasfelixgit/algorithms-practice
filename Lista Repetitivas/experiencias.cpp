#include <stdio.h>

int main(void){
	
	int n, qtd, soma, contR, contS, contC;
	char tipo;
	float prato, psapo, pcoelho;
	
	
	printf("Quantos casos de teste serao digitados? ");
	scanf("%d", &n);
	
	soma = 0;
	contR = 0;
	contS = 0;
	contC = 0;

	
	for(int i = 1; i <= n; i++){
		
		printf("\nTipo de cobaia: ");
		scanf(" %c", &tipo);
		
		printf("Quantidade: ");
		scanf("%d", &qtd);
		
		soma += qtd;
		
		if(tipo == 'R'){
			contR += qtd;
		}
		else if(tipo == 'S'){
			contS += qtd;
		}
		else if(tipo == 'C'){
			contC += qtd;
		}	
	}
	
	pcoelho = (contC/soma) * 100;
	prato = (contR/ soma) * 100;
	psapo = (contS/soma) * 100;
	
	printf("\nRelatorio Final: ");
	printf("\nTotal: %d", soma);
	printf("\nTotal de coelhos: %d", contC);
	printf("\nTotal de ratos: %d", contR);
	printf("\nTotal de sapos: %d", contS);
	printf("\nPercentual coelhos: %.2f", pcoelho);
	printf("\nPercentual ratos: %.2f", prato);
	printf("\nPercentual sapos: %.2f", psapo);
	
	return 0;
}
