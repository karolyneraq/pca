#include <stdio.h>
#include <string.h>

void acrescenta_ponto(float nota[2][100], char sexo[2][100], int equipe){
	int i = 0, j = equipe-1;
	for(; i<6; i++){
		if(sexo[j][i]=='F'){
			nota[j][i] ++;
		}
	}
}

void adiciona_aluno(float nota[2][100], char sexo[2][100], char nome[2][100][120], int n_atual){
	int i = n_atual, j;
	int equipe;
	char nome_aluno[120];
	char sexo_aluno;
	float nota_aluno;
	
	printf("\nDeseja adicionar um novo aluno a equipe 1 ou 2?: ");
	scanf("%d", &equipe);
	equipe--;
	
	printf("\nDigite o nome do aluno: ");
	scanf("%s", nome_aluno);
	
	printf("\nDigite a nota: ");
	scanf("%f", &nota_aluno);
	
	printf("\nDigite o sexo: ");
	scanf(" %c", &sexo_aluno);
	
	nota[equipe][i] = nota_aluno;
	sexo[equipe][i] = sexo_aluno;
	strcpy(nome[equipe][i], nome_aluno);
	
}

int main(){
	char nome[2][100][120] = {{"Amanda", "Jorge", "Victor", "Otavio", "Maria", "Joana"}, {"Larissa", "Fred", "Gil", "Vinicius", "Manuela", "Rafael"}};
	char sexo[2][100] = {{'F', 'M', 'M', 'M', 'F', 'F'}, {'F', 'M', 'M', 'M', 'F', 'M'}};
	float nota[2][100] = {{10, 8, 5, 1, 0, 3}, {1, 2, 9, 3, 8, 0}};
	int i, j, m1=0, m2=0, cont=0, n_alunos = 6;
	char nome_novo[13][120];
	
	for(i=0; i<2; i++){
		for(j=0; j<6; j++){
			if(sexo[i][j] == 'F'){
				if(nota[i][j] >= 8.0){
					strcpy(nome_novo[cont], nome[i][j]);
					cont++;
				}
				if(i==0)
					m1++;
				else
					m2++;
			}
		}
	}
	
	if(m1>m2)
		printf("A equipe com mais mulheres eh a de numero 1");
	else{
		if(m2>m1)
			printf("A equipe com mais mulheres eh a de numero 2");
		else
			printf("As equipes tem o mesmo numeros de mulheres");	
	}
	
	printf("\nAs alunas que podem participar do projeto sao: ");
	
	for(i=0; i<cont; i++){
		printf("\n%s", nome_novo[i]);
	}
	
	acrescenta_ponto(nota, sexo, 2);
	
	adiciona_aluno(nota, sexo, nome, n_alunos);
	
	return 0;
}
