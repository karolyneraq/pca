#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mediaDesvio(float *notas, int qtd, float *media, float *desvio){
	int i;
	float soma=0, somatorio=0;
	
	for(i=0; i < qtd; i++){
		soma += *(notas+i);
	}
	
	*media = soma/qtd;
	
	for(i=0; i<qtd; i++){
		somatorio += pow((*(notas+i)-*media), 2);
	}
	
	
	*desvio = sqrt(somatorio/qtd);
	
}

int main(){
	
	int qtd, i; 
	float *notas, media, desvio;
	
	printf("Digite a quantidade de alunos: ");
	scanf("%d", &qtd);
	
	notas = (float *) calloc(qtd, sizeof(float));
	
	for(i=0; i<qtd; i++){
		printf("\nDigite a nota do aluno %d: ", i+1);
		scanf("%f", notas+i);
	}
	
	mediaDesvio(notas, qtd, &media, &desvio);
	
	printf("\nA media eh: %.2f", media);
	printf("\nO desvio eh: %f", desvio);
	
	free(notas);
	
	return 0;
}


