#include <stdio.h>

void multixescalar(int a[3][3], int escalar, int out[3][3]);

int main()
{
    int a[3][3];
    int resul[3][3];
    int fila, coluna;
    int k;
    
    printf("Insira os valores da matriz 3x3:\n");
    
    for(fila=0; fila<3; fila++){
    	scanf("%d %d %d", &a[fila][0], &a[fila][1], &a[fila][2]);
	}
    
    printf("Digite um escalar k: ");
    scanf("%d", &k);
    
    multixescalar(a,k, resul);
    for (fila=0;fila<3;fila++){
        printf ("\n");
        for (coluna=0;coluna<3; coluna++){
            printf (" %d", resul[fila][coluna]);
        }
    }
    return 0;
}

void multixescalar(int a[3][3], int escalar, int out[3][3]){
    int fila, coluna;
    for (fila=0;fila<3;fila++){
        for (coluna=0;coluna<3; coluna++){
            out[fila][coluna]= a[fila][coluna]*escalar;
        }
    }
}
