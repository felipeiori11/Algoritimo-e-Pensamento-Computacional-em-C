#include <stdio.h>
#include <string.h>
int main(){
	int idade;
	char nome[50];
	printf("Digite a idade: ");
	scanf("%d", &idade);
	
	getchar();//Consome o Enter deixado pelo scanf
	
	
	
	printf("Digite o nome completo: ");
	fgets(nome, 50, stdin);
	printf("\nNome: %s", nome);
	printf("Idade: %d\n", idade);
}

