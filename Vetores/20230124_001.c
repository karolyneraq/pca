#include <stdio.h>

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
	
	for(j=i-1; j>=0; j--){
		printf("%d ", sequencia[j]);
	}
	
	return 0;
}
