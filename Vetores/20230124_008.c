#include <stdio.h>

void escalar(int x[], int y[], int n){
	int i, acm=0;
	for(i=0; i<n; i++){
		acm+=(x[i]*y[i]);
	}
	printf("%d", acm);
}

int main(){
	int n, i;
	
	printf("Digite o numero de elementos dos vetores x e y: ");
	scanf("%d", &n);
	
	int x[n], y[n];
	
	for(i=0; i<n; i++){
		printf("\nDigite um elemento de x: ");
		scanf("%d", &x[i]);
	}
	
	for(i=0; i<n; i++){
		printf("\nDigite um elemento de y: ");
		scanf("%d", &y[i]);
	}
	
	printf("\nO produto escalar dos vetores eh:\n");
	escalar(x, y, n);
	
	return 0;
}
