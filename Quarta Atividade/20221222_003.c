#include <stdio.h>

int main(){
	int n, pares=0, impares=0;
	do{
		printf("Digite um numero inteiro: ");
		scanf("%d", &n);
		if(n<1000){
			if(n%2==0){
				pares+=n;
			}
			else{
				impares+=n;
			}	
		}
	}while(n<1000);
	printf("\nA soma dos numeros pares eh %d", pares);
	printf("\nA soma dos numeros impares eh %d", impares);
	return 0;
}
