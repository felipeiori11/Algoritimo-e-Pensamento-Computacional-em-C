// Lendo um String completa
#include <stdio.h>
int main(){
	char nome[30];
	printf("Digite aqui o nome: ");
	fgets(nome, 30, stdin);
	printf("Nome: %s", nome);
}
