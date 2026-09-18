#include <stdio.h>
#include <string.h>
int main(){
	char texto[50] = "Bom";
	char palavra[] = "Dia";
	
	strcat(texto , palavra);
	printf("%s\n",texto);
		
}
