#include <stdio.h>

int main (){
	
	//Declaração de Variáveis
	float c, f=0;
	
	//Entrada de dados
	printf("Entre com uma temperatura em Celsius:");
	scanf("%f", &c);
	
	//Processamento invocando a função
	f=(c*9/5)+32;
	
	//Saída de dados
	printf("\nA temperatura em Fahrenheit eh igual a: %f", f);
	
	return 0;
}
