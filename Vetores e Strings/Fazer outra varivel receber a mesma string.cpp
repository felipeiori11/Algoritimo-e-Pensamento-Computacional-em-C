#include <stdio.h>
#include <string.h>
int main(){
	char nome1[30] = "Felipe iori de souza";
	char nome2[30];
	
	strcpy(nome2, nome1);
	
	printf("Nome 1: %s\n", nome1);
	printf("Nome 2: %s\n", nome2);
	printf("caracter: %lu", strlen(nome1) );

}
