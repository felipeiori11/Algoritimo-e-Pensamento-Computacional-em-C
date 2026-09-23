#include <stdio.h>

int main(){
	float vetor[8];
	int i;
	float maior;
	float menor;

	
	for(i=0;i<8;i++){
		printf("Digite aqui o %d vetor: ", i+1);
		scanf("%f", &vetor[i]);
		maior = vetor[0];
		menor = vetor[0];
		
		if (vetor[i] > maior ){
		maior = vetor[i];
	}
	
		if (vetor[i] < menor ){
		menor = vetor[i];
	}
	
	
	
	}
	
	

	
	printf("\nO maior numero informado foi: %.2f\n", maior);
    printf("O menor numero informado foi: %.2f\n", menor);
	
	
	
	
}
