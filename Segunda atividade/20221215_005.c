#include <stdio.h>
#include <math.h>

int main(){
	
	float l;
	
	printf("Digite o comprimento de um lado do quadrado: ");
	scanf("%f", &l);
	
	printf("A area do quadrado eh: %.2f", l*l);
	
	printf("O dobro eh %.2f", (l*l)*2);
	
	return 0;
}

