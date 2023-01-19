#include <stdio.h>

int fat (int n){
	int i, mt=1;
	for(i=1; i<=n; i++){
		mt*=i;
	}
	return mt;
}

int main (){
	int n;
	
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &n);
	
	printf("\nO fatorial de %d eh %d", n, fat(n));
	
	return 0;
}
