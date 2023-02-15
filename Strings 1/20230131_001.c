#include <stdio.h>
#include <string.h>

void inverte(char palavra[50], int tam){
	int i; 
	printf("\nPalavra Invertida: ");
	for(i=tam-1; i>=0; i--){
		printf("%c", palavra[i]);
	}
}

void consoantes(char palavra[50], int tam){
	int i;
	printf("\nPalavra com apenas consoantes: ");
	for(i=tam-1; i>=0; i--){
		if(palavra[i]!='a' && palavra[i]!='e' && palavra[i]!='i' && palavra[i]!='o' && palavra[i]!='u')
			printf("%c", palavra[i]);
	}
}

void maiusculas(char palavra[50], int tam){
	int i;
	printf("\nPalavra em maiusculo: ");
	for(i=tam-1; i>=0; i--){
		if((palavra[i]>='a')&&(palavra[i]<='z')){
			palavra[i] = palavra[i] - ('a' - 'A');
		}
	}
	
	printf("%s", palavra);
}

void 

int main(){
	
	char palavra[50];
	int tam;
	
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	
	tam = strlen(palavra);
	
	inverte(palavra, tam);
	consoantes(palavra, tam);
	maiusculas(palavra, tam);
	
	return 0;
}
