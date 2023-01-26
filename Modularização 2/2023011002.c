//Não terminado
#include <stdio.h>

int contar(int n, int d){
	int cont=0;
	while(n>0){
		if((n%10)==d)
			cont++;
		n=n/10;
	}
	return cont;
}

void permutacao(int a, int b){
	
}

int main(){
	int n, d, cont=0;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	printf("Digite um numero maior que zero e menor que 9: ");
	scanf("%d", &d);
	
	cont = contar(n, d);
	
	if(cont==1)
		printf("O digito %d aparece %d vez em %d", d, cont, n);
	else
		printf("O digito %d aparece %d vezes em %d", d, cont, n);
	
	return 0;
}
