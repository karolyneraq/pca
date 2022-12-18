#include <stdio.h>

int main (){
	float salHora, horas, salB=0, inss=0, sind=0, desc=0;
	
	printf("Digite quanto voce ganha por hora: ");
	scanf("%f", &salHora);
	
	printf("Digite o numero de horas trabalhadas no mes: ");
	scanf("%f", &horas);
	
	salB = salHora*horas;
	
	inss= salB*0.08;
	
	sind = salB*0.05;
	
	desc = inss+sind+ (salB*0.11);
	
	printf("O salario bruto eh: R$ %.2f", salB);
	
	printf("Foi pago ao INSS R$ %.2f", inss);
	
	printf("Foi pago ao sindicato R$ %.2f", sind);
	
	printf("O salario liquido eh: R$ %.2f", salB-desc);
		
	return 0;
}
