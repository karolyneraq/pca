#include <stdio.h>

int main (){
	
	//Declara��o de Vari�veis
	float c, f=0;
	
	//Entrada de dados
	printf("Entre com uma temperatura em Celsius:");
	scanf("%f", &c);
	
	//Processamento invocando a fun��o
	f=(c*9/5)+32;
	
	//Sa�da de dados
	printf("\nA temperatura em Fahrenheit eh igual a: %f", f);
	
	return 0;
}
