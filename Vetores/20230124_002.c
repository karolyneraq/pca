#include <stdio.h>

void inversa(int vetor[], int i){
	int j;
	for(j=i-1; j>=0; j--){
		printf("%d ", vetor[j]);
	}
}

int main(){
	int n, sequencia[100], i=0, j;	
	char escolha = 's';
	
	do{	
		do{
			printf("\nDigite um numero menor que 100: ");
			scanf("%d", &n);	
		}while(n>=100);
		
		sequencia[i] = n;
		i++;
		
		printf("Deseja continuar a serie? [s] ou [n]\n");
		scanf(" %c", &escolha);
		
	}while(escolha == 's' && i<100);
	
	printf("\nA Ordem inversa eh: \n");
	inversa(sequencia, i);
	
	return 0;
}

