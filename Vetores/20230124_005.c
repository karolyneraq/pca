#include <stdio.h>
void fatorial(int v[], int n){
	int i, j, fat=1;
	for(i=0; i<n; i++){
		fat=1;
		for(j=1; j<=v[i]; j++){
			fat*=j;
		}
		printf("%d ", fat);
	}
}


int main(){
	int n, i, aux;
	
	printf("Digite o numero de termos da sequencia: ");
	scanf("%d", &n);
	
	int sequencia[n];
	
	for(i=0; i<n; i++){
		do{
			printf("\nDigite um numero: ");
			scanf("%d", &aux);
		}while(aux>=100);
		
		sequencia[i]=aux;
	}
	
	printf("\nA nova sequencia eh:\n");
	
	fatorial(sequencia, n);
	
	return 0;
}
