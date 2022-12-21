#include <stdio.h>

int main(){
	
	int n, maior=0, menor=0;
	int i;
	
	for(i=0; i<20; i++){
		printf("Digite um numero: ");
		scanf("%d", &n);
		if(n<menor){
			menor =n;
		}else{
			if(i==0){
				menor=n;
			}
		if(n>maior){
			maior=n;
		}
		}
	}
	
	printf("\nO maior numero do conjunto eh %d", maior);
	
	printf("\nO menor numero do conjunto eh %d", menor);
	
	return 0;
}
