/* 20221215_007.  Faça um Programa que peça a temperatura em graus 
Farenheit, transforme e mostre a temperatura em graus Celsius. C = (5 * (F-32) / 9).
*/

#include <stdio.h>

int main (){
	
	//Declaração de Variáveis
	float f, c=0;
	
	//Entrada de dados
	printf("Entre com uma temperatura em Fahrenheit:");
	scanf("%f", &f);
	
	//Processamento invocando a função
	c=5.0/9.0*(f-32);
	
	//Saída de dados
	printf("\nA temperatura em Celsius eh igual a: %f", c);
	
	return 0;
}
