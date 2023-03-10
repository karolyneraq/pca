#include <stdio.h>

void troca(float *a, float *b){
	float aux = *a;
	
	*a = *b;
	*b = aux;
	
}

int main(){
	float a = 1.6, b = 2.9;
	
	troca(&a, &b);
	
	printf("a = %f, b = %f", a, b);
	
	return 0;
}
