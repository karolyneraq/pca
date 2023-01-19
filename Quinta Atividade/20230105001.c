#include <stdio.h>
#include <stdlib.h>
int x, y;

void absdif(int menor, int maior){
    printf("\nO valor absoluto da diferenca dos dois numeros eh %d", maior-menor);
}

void percentual(int valor, int total){
    float p=0;
    p = (100*valor)/total;
	printf("\nPercentual de %d  em relacao a %d = %.2f", valor, total, p);
	puts("%");
	abs(valor);
}

int scanIntIntervalo(){
	printf("Digite dois valores: ");
	scanf("%d %d", &x, &y);

	if(x>0 && x<1000 && y>0 && y<1000){
		return 1;
	}
	else{
		printf("\nDigite valores entre 0 e 1000");
	}
}

int main (){
	if(scanIntIntervalo()==1){
		if(x>y){
			percentual(y, x);
			absdif(y, x);
		}
		else{
			percentual(x, y);
			absdif(x, y);
		}
	}
	return 0;
}




