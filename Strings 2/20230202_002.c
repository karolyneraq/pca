#include <stdio.h>
#include <string.h>

void print(char nomes[5][121], int cont){
	int i;
	printf("\nLista de nomes:");
	for (i=0; i<cont; i++){
		printf("\n%s", nomes[i]);
	}
}

void del(char nomes[5][121], int cont){
	int i;
	char nome[121];
	
	printf("\nDigite o nome que deseja apagar: ");
	fflush(stdin);
	scanf("%s", nome);
	
	printf("\nLista de nomes:");
	for (i=0; i<cont; i++){
		if(strcmp(nomes[i], nome)!=0){
			printf("\n%s", nomes[i]);
		}
	}
}

void printAlf(char nomes[5][121], int cont){
	int i, j;
	char aux[121];
	printf("\nNomes em ordem alfabetica:");
	for (i = 1; i < cont; i++)   {
        for (j = 1; j < cont; j++){
			if (strcmp(nomes[j-1], nomes[j]) > 0) {
				strcpy(aux, nomes[j-1]);
				strcpy(nomes[j-1], nomes[j]);
				strcpy(nomes[j], aux);
      		}
      	}
    }
    
    for(i=0; i<cont; i++){
    	printf("\n%s", nomes[i]);
	}
}

int main(){
	char nomes[5][121], escolha;
	int i, cont=0;
	
	printf("\nGostaria de inserir nomes? [s][n]: ");
	scanf(" %c", &escolha);
		
	while(escolha=='s' && cont<5){
		printf("\nDigite um nome com ate 120 caracteres: ");
		scanf("%s", nomes[cont]);
		cont++;
		
		printf("\nDeseja continuar a inserir nomes? [s][n]: ");
		scanf(" %c", &escolha);
	}
	
	if(cont>0){
		print(nomes, cont);
		del(nomes, cont);
		printAlf(nomes, cont);
	}
	
	return 0;
}

