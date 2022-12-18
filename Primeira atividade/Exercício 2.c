#include <stdio.h>
#include <string.h>

int main (){
	char nome[100], sexo;
	int idade;
	
	printf("Digite o nome:");
	gets(nome);
	
	printf("\nDigite o sexo [F- (Feminino) ou M - (Maculino)]:\n");
	scanf(" %c", &sexo);
	
	printf("\nDigite a idade:\n");
	scanf("%d", &idade);
	
	if(sexo=='F'){
		 printf("\nEh mulher");
	} else{
		if(sexo=='M'){
			printf("\nNao eh mulher");
		}
		else{
			printf("\nSexo Invalido!");
		}
	}
	
	return 0;
}

