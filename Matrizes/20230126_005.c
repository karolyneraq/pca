#include <stdio.h>

void d_principal(int m[3][3]){
	int i, j;
	
	printf("\nDiagonal principal:");
	
	for(i=0; i<3; i++){
		printf("\n");
		for(j=0; j<3; j++){
			if(i==j){
				printf("%d", m[i][j]);
			}
			else
				printf(" ");
		}
	}

}
void d_secundaria(int m[3][3]){
	int i, j;
	
	printf("\nDiagonal secundaria:");
	
	for(i=0; i<3; i++){
		printf("\n");
		for(j=0; j<3; j++){
			if( i == 3 - 1 - j){
				printf("%d", m[i][j]);
			}
			else
				printf(" ");
		}
	}
}

int soma(int m[3][3], int l, int c){
	int i, j, soma=0;
	if(l>0){
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				if(i == l-1){
					soma += m[i][j];
				}
			}
		}
		
		return soma;
	}
	if(c>0){
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				if(j == c-1){
					soma += m[i][j];
				}
			}
		}
		return soma;
	}
}
void sem_d_principal(int m[3][3]){
	int i, j;
	
	printf("\nTudo menos a diagonal principal:\n");
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(i!=j){
				printf("%d ", m[i][j]);
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
}

int main(){
	int m[3][3], i;
	int s_linha = 0, s_coluna = 0; 
	
	printf("Digite os valores da matriz:\n");
	
	for(i=0; i<3; i++){
			scanf("%d %d %d", &m[i][0], &m[i][1], &m[i][2]);
	}
	
	d_principal(m);
	d_secundaria(m);
	s_linha = soma(m, 2, 0);
	s_coluna = soma(m, 0, 2);
	sem_d_principal(m);
	
	printf("\nA soma da linha 2 eh: %d", s_linha);
	printf("\nA soma da coluna 2 eh: %d", s_coluna);
			
	return 0;
}

