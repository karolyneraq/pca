#include <stdio.h>

int main(){
	float mi, massa=0;
	int i, j, s=0, min=0, hr=0;
	
	printf("Digite a massa inicial: ");
	scanf("%f", &mi);
	
	massa=mi;
	
	while(massa>=0.5){
		massa=massa/2;
		s+=50;
	}
	
	min = s/60;
	hr = min/60;
	s = s%60;
	min = min%60;
	
	printf("\nA massa inicial era %f", mi);
	printf("\nA massa final eh: %f", massa);
	printf("\nO tempo foi: %d hr, %d min, %d seg", hr, min, s);
	
	return 0;
}

