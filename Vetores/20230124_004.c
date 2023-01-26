#include <stdio.h>

void pares(int vetor[], int i){
	int j;
	for(j=0; j<i; j++){
		if(vetor[j]%2==0){
			printf("%d ", vetor[j]);
		}
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
	
	printf("\nA sequencia de numeros pares eh: \n");
	pares(sequencia, i);
	
	return 0;
}

