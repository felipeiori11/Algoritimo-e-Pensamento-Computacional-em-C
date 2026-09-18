#include <stdio.h>
#include <string.h>
int main(){
	char palavra[30];
	printf("Digite uma palavra: ");
	fgets(palavra, 30, stdin);
	
	printf("A quantidade de caracteres: %lu\n", strlen(palavra));
}
