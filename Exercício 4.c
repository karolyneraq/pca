#include <stdio.h>

int main (){
	float conta, taxa=0;
	printf("Digite o valor da conta: ");
	scanf("%f", &conta);
	
	taxa= conta * 1.10;
	
	printf("\nO valor da conta com a porcentagem do garçom eh: R$ %.2f ", taxa);
	return 0;
}

