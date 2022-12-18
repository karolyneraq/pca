#include <stdio.h>
#include <math.h>

int main(){
	
	float raio;
	
	printf("Digite o raio do circulo: ");
	scanf("%f", &raio);
	
	printf("A area do circulo eh: %.2f", 3.14*pow(raio,2));
	
	return 0;
}

