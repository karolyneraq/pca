#include <stdio.h>

int main(){
	
	float a, acm=0;
	int i;
	for(i=0; i<5; i++){
		printf("Digite um numero:");
		scanf("%f", &a);
		acm+=a;
	}
	
	printf("A soma dos cinco numeros eh %.2f", acm);
	
	return 0;
}
