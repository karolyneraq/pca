#include <stdio.h>

int * procura (int *endInicial, int *endFinal){
	int *i;
	for(i=endInicial; i<=endFinal; i++){
		if(*i == 2){
			return i;
		}
	}
	return NULL;
}

int main(){
	
	int vet[] = {1, 2, 3, 4, 5, 6, 2, 7, 8, 2};
	int *pt_valor, i;
	
	for(i=0; i<10; i++){
		pt_valor = procura(&vet[i], &vet[i]);
		if(pt_valor!= NULL)
			printf("%d ", pt_valor);
	}
	
	return 0;
}
