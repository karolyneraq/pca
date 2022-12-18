#include <stdio.h>

int main (){
	float base, altura, area;
	
	printf("Digite o valor da base: ");
	scanf("%f", &base);
	
	printf("\nDigite o valor da altura: ");
	scanf("%f", &altura);
	
	area = (base*altura)/2;
	
	printf("\nA Area do triangulo eh: %.2f cm quadrados", area);
	
	return 0;
}

