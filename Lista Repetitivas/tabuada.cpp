#include <stdio.h>

int main(void){
	
	int n, mult;
	
	printf("Deseja a tabuada para qual valor? ");
	scanf("%d", &n);
	
	for(int i = 1; i <= 10; i++){
		
		mult = n * i;
		printf("%d X %d = %d\n", n, i , mult);
		
	}
}
