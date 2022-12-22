#include <stdio.h>

int main(){
	int  i, j;
	
	for(i=1; i<=9; i++){
		for(j=1; j<=10; j++){
			printf("\n %d + %d = %d\t %d x %d = %d", i, j, i+j, i, j, i*j);	
		}
		printf("\n");
	}

	printf("\n");
	
	for(i=1; i<=9; i++){
		for(j=i; j<=i+10; j++){
			printf("\n %d - %d = %d", j, i, j-i);	
		}
		printf("\n");
	}
	
	return 0;
}
