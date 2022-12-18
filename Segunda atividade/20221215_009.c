#include <stdio.h>
#include <math.h>

int main (){
	int a, b;
	float c, cal1=0;
	
	printf("Digite dois numeros inteiros: ");
	scanf("%d %d", &a, &b);
	
	printf("\nDigite um numero real: ");
	scanf("%f", &c);
	
	cal1= (a*2)*(b/2);
	
	printf("\nO produto do dobro de %d com metade de %d, eh igual a %.2f", a, b, cal1);

	printf("\nA soma do triplo de %d com %.2f eh igual a %.2f", a, c, (a*3)+c);
	
	printf("\n%.2f elevado ao cubo eh igual a %.2f", c, pow(c, 3));
	
	return 0;

}
