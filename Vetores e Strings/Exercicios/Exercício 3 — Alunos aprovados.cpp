#include <stdio.h>
#include <string.h>

int main(){
	char nome[8][50];
	int idade[8];
	float media[8];
	float media_turma = 0;
	int i;
	int alunos_aprovados = 0;
	int alunos_reprovados = 0;
	
	
	for(i= 0; i <8; i++ ){
		printf("Digite aqui o nome do %d aluno: \n", i + 1);
		fgets(nome[i], 50, stdin);
		printf("Digite aqui a idade do %d aluno: \n", i + 1);
		scanf("%d", &idade[i]);
		printf("Digite aqui a media do %d aluno: \n", i + 1);
		scanf("%f", &media[i]);
		media_turma += media[i];
		getchar();
		
		if (media[i] >= 6.0){
			alunos_aprovados++;	
		}
		else{
			alunos_reprovados++;
		}
		
		
		}
		//media > 6 aprovado
		//media < 6 reprovado
		
	
	media_turma = media_turma / 8;
	
	for(i= 0;i <8; i++ ){
		if (media[i] > 6.0){
			printf("\n---ALUNOS APROVADOS---\n");
			printf("Nome: %s\n", nome[i]);
			printf("Media: %.2f\n", media[i]);	
		}
		
		
	
		
			
	
	}	
		printf("\n---QUANTIDADES---\n");
		printf("A quantidade de alunos aprovados foi: %d\n", alunos_aprovados);
		printf("A quantidade de alunos reprovados foi: %d\n", alunos_reprovados);
		printf("\n---MEDIA DA TURMA---\n");
		printf("A media da turma foi: %.2f\n",media_turma);
}


