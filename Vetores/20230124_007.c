#include <stdio.h>
int main (){
	int ocor[6]={0, 0, 0, 0, 0, 0}, i, j, n, dado[6]={1, 2, 3, 4, 5, 6};
	
	printf("Digite o numero de lancamentos: ");
	scanf("%d", &n);
	
	int lanc[n];
	
	for(i=0; i<n; i++){
		printf("\nDigite o resultado do lancamento: ");
		scanf("%d", &lanc[i]);
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<6; j++){
			if(lanc[i]==dado[j]){
				ocor[j]+=1;
			}
		}
	}
	
	for(i=0; i<6; i++){
		printf("\nA face de numero %d teve %d ocorrencia(s)", dado[i], ocor[i]);
	}
	
	return 0;
}
