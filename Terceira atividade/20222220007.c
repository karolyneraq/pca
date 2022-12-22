#include <stdio.h>
#include <string.h>

int main (){
	float n[3], n_menor[3]={0, 0, 0}, n_maior[3]={0, 0, 0}, media=0, m_maior=0, m_menor=0;
	int i, cont=0;
	char escolha[4];
	
	do{
		printf("\nDigite as tres notas: ");
		scanf("%f %f %f", &n[0], &n[1], &n[2]);
		
		media = (n[0]+n[1]+n[2])/3;
		
		//Recebe a maior media
		if(media>m_maior)
			m_maior=media;
		
		//Recebe a menor media
		if(media<m_menor)
			m_menor=media;
		
		else{
			//Se for a primeira vez do loop, a media será atribuida ao menor
			if(cont==0)
				m_menor=media;
		}
		
		for(i=0; i<3; i++){
			//Recebe a maior nota
			if(n[i]>n_maior[i])
				n_maior[i]=n[i];
			
			//Recebe a menor media
			if(n[i]<n_menor[i])
				n_menor[i]=n[i];
			
			else{
				//Se for a primeira vez do loop, a media será atribuida ao menor
				if(cont==0)
					n_menor[i]=n[i];
			}
			
		}
		
		printf("\nDeseja inserir notas de outro aluno? Digite: [sim] ou [nao]\n");
		scanf("%s", escolha);
		
		cont++;
		
	}while(strcmp(escolha, "sim")==0);
	
	for(i=0; i<3; i++){
		
		printf("\nA maior nota do exercicio %d foi %.1f", i+1, n_maior[i]);
		printf("\nA menor nota do exercicio %d foi %.1f", i+1, n_menor[i]);
		
	}
	
	printf("\n\nA maior media foi %.1f", m_maior);
	printf("\nA menor media foi %.1f", m_menor);
	
	return 0;
}
