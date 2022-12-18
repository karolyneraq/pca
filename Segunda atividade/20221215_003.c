#include <stdio.h>

int main(){
	
	float m;
	printf("Digite o valor em metros: ");
	scanf("%f", &m);
	
	printf("\nO valor em centimetros eh %.2f", m*100);
	
	return 0;
}

