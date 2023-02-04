#include <stdio.h>
#include <string.h>
int main(){
	char m[2][3][100];
	int i, j;
	char nome[100];
	
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			printf("Digite um nome: ");
			gets(m[i][j]);
		}
	}
	
	printf("\nDigite um nome para saber a equipe: ");
	gets(nome);
	
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			if(strcmp(nome, m[i][j])==0){
				printf("\nEquipe %d", i+1);
			}
		}
	}
	
	return 0;
}

