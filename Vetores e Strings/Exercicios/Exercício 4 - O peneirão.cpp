
#include <stdio.h>

int main() {
    int vetor[10];
    int i;

    for(i = 0; i < 10; i++) {
        printf("Digite aqui o %d vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    


for ( i= 0; i < 10; i++){
	if ( vetor[i] % 2 == 0){
		printf("o vetor %d e PAR!\n", vetor[i]);
		
	}

}
}
