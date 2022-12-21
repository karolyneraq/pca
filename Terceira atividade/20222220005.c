#include <stdio.h>

int main(){
	
	int n, maior=0, menor=0;
	int negativo=0;
	int i;
	
	for(i=0; i<5; i++){
		printf("Digite um numero: ");
		scanf("%d", &n);
		
		if(n<0){
			printf("Digite numeros positivos!");
			negativo=1;
			break;
		}
		
		if(n<menor){
			menor =n;
		}else{
			if(i==0){
				menor=n;
			}
		}
		if(n>maior){
			maior=n;
		}
		
	}
	
	if(negativo==0){
		printf("\nO maior numero do conjunto eh %d", maior);
		printf("\nO menor numero do conjunto eh %d", menor);
	}
	
	return 0;
}
