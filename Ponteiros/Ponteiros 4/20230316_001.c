#include <stdio.h>
#include <stdlib.h>

int * scan(int *n){
	int i, *p;
	
	printf("Digite o numero de elementos: ");
	scanf("%d", n);
	
	p = (int *) calloc(*n, sizeof(int));
	
	for(i=0; i < *n; i++){
		
		printf("\nDigite um numero: ");
		scanf("%d", p+i);
	}
	
	return p;
}

void maxMin(int *n, int *p, int *max, int *min){
	int i;
	for(i = 0; i < *n; i++){
		
		if(i==0){
			*max = *p;
			*min = *p;
		}
		
		else{
			if(*(p+i) > *max)
				*max = *(p+i);
			
			if(*(p+i) < *min)
				*min = *(p+i);
		}
	}
	
}

int main(){
	int n, *p, max, min;
	
	p = scan(&n);
	maxMin(&n, p, &max, &min);
	
	printf("\nMaior: %d, Menor: %d", max, min);
	
	free(p);
	return 0;
}
