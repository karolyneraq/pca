#include <stdio.h>

int main(){	
	int i, j, m[3][3], x, temp=0, k=0;
	
	printf("Digite os valores da matriz 3x3:\n");
	
	for(i=0; i<3; i++){
			scanf("%d %d %d", &m[i][0], &m[i][1], &m[i][2]);
	}
	
	printf("Digite um valor x: ");
	scanf("%d", &x);
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(m[i][j]==x){
				printf("\nLinha: %d, Coluna: %d", i+1, j+1);
				k=1;
			}
		}
	}
	
	if(k==0){
		printf("\nNao encontrado!");
	}
	
	return 0;
}

