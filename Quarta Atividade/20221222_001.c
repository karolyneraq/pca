#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(){
	float y, x1, xi, xii;
	int i;
	printf("Digite um numero positivo: ");
	scanf("%f", &y);
	x1 = y/2;
	xi = x1;
	
	xii = xi - ((pow(xi, 2) - y)/(2*xi));
	
	float e = 0.1;
	
	if(y>0){
		
		while (fabs(xii - xi) >= e){
			xi = xii;
			xii = xi - ((pow(xi, 2) - y)/(2*xi));
			
		}	
		
		printf("%f", xii);		
		printf("\n%f", sqrt(y));			
	}
	else{
		printf("Digite um valor positivo!");
	}
	getch();
	return 0;
}


