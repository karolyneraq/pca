#include <stdio.h>

int main (){
	
	float sal, novo_sal=0, reajuste=0;
	
	printf("Digite o salario atual: ");
	scanf("%f", &sal);
	
	reajuste=sal*1.10;
	
	printf("\nNovo salario: R$ %.2f", reajuste);
	
	return 0;
}

