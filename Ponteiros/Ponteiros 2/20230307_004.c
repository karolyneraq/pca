#include <stdio.h>

int main(){
	
	int array[8], i, *pt;
	pt = array;
	
	for (i=0; i<8; i++){
		printf("\nDigite um numero: ");
		scanf("%d", pt);
		
		pt++;
	}
	
	printf("\nDobro dos valores lidos:\n");
	
	pt = array;
	
	for(i=0; i<8; i++){
		printf("%d ", *pt*2);
		pt++;
	}
	
	pt = array;
	
	printf("\nEndereco das posicoes que possuem valores pares:\n");
	
	for (i=0; i<8; i++){
		if(*pt%2==0)
			printf("%d ", pt);
		pt++;
	}
	
	return 0;
}
