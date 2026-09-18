// Leitura e Impressão de um valor
#include <stdio.h>
int main(){
	int numero[5], i;
	for(i = 0; i < 5; i++){
		printf("Digite um numero: ");
		scanf("%d", &numero[i]);
	}
	for(i = 0; i < 5; i++){
		printf("%d ", numero[i]);
	
	}
	
}
