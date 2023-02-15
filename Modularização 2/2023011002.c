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

int permutacao(int a, int b){
	int aux, d, permut = 0;

    if (a > b){
		aux = a;
	}

    else{
		aux = b;
	}

    d = aux%10;

    while (aux > 0){

        if (contar(a, d) != contar(b, d)){

            permut++;
            break;
        
        }

        aux = aux/10;
        d = aux%10;

    }

    return permut;

}

int main(){
	int n, d, p=0;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	printf("Digite mais um numero: ");
	scanf("%d", &d);
	
	p = permutacao(n, d);
	
	if(p==0)
		printf("O number %d eh uma permutacao de %d", n, d);
	else
		printf("\nO numero %d nao eh uma permutacao de %d", n, d);
	
	return 0;
}
