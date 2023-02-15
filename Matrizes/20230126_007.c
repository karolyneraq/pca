#include <stdio.h>

int main()  {
    int i, j, n, soma = 0;
    int it[8];
    int pos1, pos2;

    printf("Digite a ordem da matriz: ");
    scanf("%d", &n);
    
    int m[n][n];

    for (i = 0; i < n; i++) {
    	
        for (j = 0; j < n; j++) {
        	
            printf("Digite um numero: ");
            scanf("%d", &m[i][j]);
            
        }
        
    }

	printf("Itinerario:\n");
	
    for (i = 0; i < 8; i++) {
    	
    	printf("Digite um numero: ");
        scanf("%d", &it[i]);
        
    }

    for (i = 0; i < 7; i++) {
        pos1 = it[i];
        pos2 = it[i+1];
        soma += m[pos1][pos2];
    }

    printf("\nO valor do itinerario eh igual a %d", soma);

    return 0;
}
