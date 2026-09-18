#include <stdio.h>
#include <string.h>

int main(){
	char nome[50];
	int idade[5];
	int i;
	float nota;
	
	
	for( i = 1; i <= 5; i++ ){
		printf("Digite aqui o nome do %d aluno: ",i);
		fgets(nome, 50, stdin);
		printf("Digite aqui a idade do %d aluno: ",i);
		scanf("%d",&idade[i]);
		printf("Digite aqui a nota do %d aluno: ", i);
		scanf("%f", &nota);
		getchar();
		
		printf("\n---RESULTADOS---\n");
		printf("Nome: %s", nome);
		printf("Idade: %d Anos\n", idade[i]);
		printf("Nota: %.2f\n", nota);
	}
	

	
	
	
}
