#include <stdio.h>
int main (){
	float n, maior=0, menor=0;
	int i;
	
	for(i=0; i<5; i++){
		printf("Digite um numero real: ");
		scanf("%f", &n);
		
		if(i==0){
			maior=n;
			menor=n;
		}else{
			if(n>maior){
				maior=n;
			}
			
			if(n<menor){
				menor=n;
			}
		}
	}
	printf("\nO maior numero foi %f", maior);
	printf("\nO menor numero foi %f", menor);
	
	return 0;
}
