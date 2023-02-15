#include <stdio.h>
#include <math.h>

int decimal(int bi) {
	int aux, dec = 0, i;

	for (i = 0; i < 6; i++) {
		aux = bi - ((bi / 10)*10);
		bi = bi / 10;
		dec += aux * pow(2,i);
	}

	return dec;
}

int main()  {
	int bi;
    
    printf("Digite um numero binario: ");
    scanf("%d", &bi);
    
    printf("\nO numero decimal eh: %d", decimal(bi));

    return 0;
}
