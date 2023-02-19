#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char goleiros[3][2][100] = {{"Hugo Souza", "8.5"}, {"Matheus Cunha", "9"}, {"Santos", "10"}};
	char defesa[7][2][100] = {{"Rodrigo Caio", "3.2"}, {"Leo Pereira", "5"}, {"David Luiz", "9"}, {"Cleiton", "8"}, {"Fabricio Bruno", "7"}, {"Pablo", "8"}, {"Matheuzinho", "10"}};
	char medio_campo[8][2][100] = {{"Arturo Vidal", "2"}, {"Thiago Maia", "5.5"}, {"Erick", "6"}, {"Gerson", "7"}, {"Everton Ribeiro","9"}, {"De Arrascaeta", "10"}, {"Victor Hugo", "9"}, {"Matheus Franca", "7"}};
	char atacantes[5][2][100] = {{"Everton", "6"}, {"Pedro", "1"}, {"Marinho", "4"}, {"Gabi Gol", "10"}, {"Bruno Henrique", "2"}};
	
	int i, j;
	float nota=0, maior=0;
	char goleiro[100];
	
	for(i=0; i<3; i++){
			nota = atof(goleiros[i][1]);
			
			if(nota>maior){
				maior = nota;
				strcpy(goleiro, goleiros[i][0]);
			}
	}
	
	printf("\nGoleiro: %s", goleiro);
	
	
	
	return 0;
}
