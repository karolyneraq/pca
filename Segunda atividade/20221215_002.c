#include <stdio.h>

int main(){
	
	float media =0, nota, soma=0;
	int i;
	
	for (i=0; i<4; i++){
		printf("Digite a nota do bimestre %d: ", i+1);
		scanf("%f", &nota);
		soma += nota;
	}
	media = soma/4;
	
	printf("\nA media eh: %.1f", media);
	
	return 0;
}

