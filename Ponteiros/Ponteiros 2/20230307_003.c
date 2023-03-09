#include <stdio.h>

int main(){
	int *pi, i = 3;
	float *pf, f = 1.5;
	char *pc, c = 'A';
	
	printf("ANTES:");
	
	printf("\ni = %d", i);
	printf("\nf = %f", f);
	printf("\nc = %c", c);
	
	pi = &i;
	pf = &f;
	pc = &c;
	
	*pi = 5;
	*pf = 2.1;
	*pc = 'F';
	
	printf("\n\nDEPOIS:");
	
	printf("\ni = %d", i);
	printf("\nf = %f", f);
	printf("\nc = %c", c);
	
	return 0;
}
