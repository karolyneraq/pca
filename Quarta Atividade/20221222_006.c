#include <stdio.h>

int main(){
	
	int n, i, soma=0;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	
	for(i=1; i<n; i++){
		if(n%i==0){
			soma+=i;	
		}
	}
	
	if(soma==n){
		printf("\nEh um numero perfeito");
	}else{
		printf("\nNao eh numero perfeito");
	}
	
	return 0;
}
