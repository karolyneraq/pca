#include <stdio.h>

int ordena(int *pa, int *pb, int *pc){
	int a = *pa, b = *pb, c = *pc;
	
	if(a == b && a == c){
		return 1;
	}
	
	if(a < b){
		if(b > c){
			if(a < c){
				*pb = c;
				*pc = b;
			}
			else{
				*pa = c;
				*pb = a;
				*pc = b;
			}
		}
	}
	else{
		if(b < c){
			
			if(a < c){
				*pa = b;
				*pb = a;
			}
			else{
				*pa = b;
				*pb = c;
				*pc = a;
			}
		}
		else{
			*pa = c;
			*pc = a;
	}
	}
	
	
	return 0;
}

int main (){
	int a, b, c; 
	int val = 0;
	
	printf("Digite um valor para a, b, c: ");
	scanf("%d %d %d", &a, &b, &c);
	
	val = ordena(&a, &b, &c);
	
	if (val)
		printf("Todos valores sao iguais");
	else
		printf("a = %d, b = %d, c = %d", a, b, c);
	
	return 0;
}
