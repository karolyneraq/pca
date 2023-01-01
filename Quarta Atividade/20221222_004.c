#include <stdio.h>

int main(){
	int n, i, div=0;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		if(n%i==0){
			div++;
		}
	}
	
	if(div==2){
		printf("\nEh numero primo");
	}else{
		printf("\nNao eh numero primo");
	}
	
	return 0;
}
