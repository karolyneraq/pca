#include <stdio.h>

int main (){
	float altura, peso=0;
	
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	peso = (72.7*altura)-58;
	
	printf("Seu peso ideal eh: %.2f", peso);
	
	return 0;	
}
