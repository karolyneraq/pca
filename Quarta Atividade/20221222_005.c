#include <stdio.h>

int main(){
	float soma=0;
	int i, j;
	for(i=1, j=1; i<=99; i+=2, j++){
		soma+=i/j;
	}
	
	printf("A soma eh %.0f", soma);
	return 0;
}
