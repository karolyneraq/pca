/* 20221215_006.  Faça um Programa que pergunte quanto você ganha por hora
 e o número de horas trabalhadas no mês. 
Calcule e mostre o total do seu salário no referido mês.
*/

#include <stdio.h>

int main(){
	float salHora, horas, salMes=0;
	
	printf("Digite quanto voce ganha por hora: ");
	scanf("%f", &salHora);
	
	printf("Digite o numero de horas trabalhadas no mes: ");
	scanf("%f", &horas);
	
	salMes = salHora*horas;
	
	printf("O salario total do mes referido eh: R$ %.2f", salMes);
	
	return 0;	
}
