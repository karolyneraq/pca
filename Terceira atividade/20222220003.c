#include <stdio.h>

int main(){
	int i, n, s=0;
	
	for(i=0; i<50; i++){
		printf("Digite um numero: ");
		scanf("%d", &n);
		
		if(n%2!=0 && n>100 && n<200)
			s+=n;
	}
	
	printf("/nA soma dos numeros impares eh %d", s);
	
	return 0;
}
