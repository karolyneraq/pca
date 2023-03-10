#include <stdio.h>

void busca (char *frase, char letra, int *v, int *len){
	char *i;
	int cont = 0;
	
	for(i = frase; *i != '\0'; i++){
		if(*i == letra){
			*v = cont;
			*len = *len + 1;
			v++;
		}
		cont++;
	}
}

int main(){
	char frase[10] = "ARARA";
	char letra = 'A';
	int v[100], len = 0, i;
	
	busca(&frase[0], letra, &v[0], &len);
	
	for(i = 0; i < len; i++){
		printf("%d ", v[i]);
	}
	
	return 0;
}
