#include <stdio.h>
#include <string.h>
int main(){
	char senha[10];
	printf("Digite aqui sua senha: ");
	scanf("%s", senha);
	if (strcmp(senha, "1234") == 0){ 
		printf("Senha correta!\n");
	}
	else{
		printf("Senha Incorreta!");
	}

}
