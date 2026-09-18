#include <stdio.h>
#include <string.h>

int main(){
	char nomeproduto[50];
	int estoque, i;
	float preco_unitario, valortotalestoque;
	
	
	
	for( i = 1; i <=6; i++){
		printf("\nDigite aqui o nome do produto %d: \n", i);
		fgets(nomeproduto, 50, stdin);
		printf("\nDigite aqui a quantiade em estoque: \n");
		scanf("%d", &estoque);
		printf("\nDigite aqui o preco unitario: \n");
		scanf("%f", &preco_unitario);
		getchar();
		
		valortotalestoque = estoque * preco_unitario;
		printf("\n---RESULTADOS---\n");
		printf("Nome do produto: %s", nomeproduto);
		printf("Quantidade em estoque: %d\n", estoque);
		printf("Preco unitario: R$%.2f\n", preco_unitario);
		printf("O valor total existente em estoque e: R$%.2f\n", valortotalestoque);
		
	}
}
