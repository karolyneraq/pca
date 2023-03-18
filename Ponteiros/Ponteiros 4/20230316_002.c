#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *m, i, j, cont=1;
	
	m = malloc (2 * 3 * sizeof(int));
	
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			*(m+(i*3)+j)= cont;
			cont++; 
		}
	}
	
	printf("Usando aritmetica de ponteiros:\n");
	
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			printf("%d ", *(m+(i*3)+j));
		}
		printf("\n");
	}
	
	printf("\nUsando indexes:\n");
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			printf("%d ", m[(i*3)+j]);
		}
		printf("\n");
	}
	
	free(m);
	
	return 0;
}
