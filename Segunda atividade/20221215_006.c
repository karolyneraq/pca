/* 20221215_006.  Fa�a um Programa que pergunte quanto voc� ganha por hora
 e o n�mero de horas trabalhadas no m�s. 
Calcule e mostre o total do seu sal�rio no referido m�s.
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
