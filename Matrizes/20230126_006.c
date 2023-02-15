#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, matriz[100][100], i, j;
	
    printf("Digite a ordem da matriz: ");
    scanf("%d", &n);

    printf("Digite os valores da matriz:\n");
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        	printf("\nDigite um numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    int soma = 0;
    int soma2 = 0;
    int eh_magico = 1;

    for(i=0;i<n;i++){
		soma+= matriz[0][i];
	}
	
    for(i=1;i<n;i++){
    	
        for(j=0;j<n;j++){
			soma2 += matriz[i][j];
		}
        
        if(soma != soma2){
			eh_magico=0;
		}
		
        soma2 = 0;
    }
    soma = 0;

    if(eh_magico == 1){
    	
        for(i=0;i<n;i++){
			soma+= matriz[i][0];
		}

        for(i=1;i<n;i++){
        	
            for(j=0;j<n;j++){
				soma2 += matriz[j][i];
			}
			
            if(soma != soma2){
				eh_magico=0;
			}
			
            soma2 = 0;
        }
        soma = 0;

        if(eh_magico == 1){
        	
            for(i=0;i<n;i++){
				soma+= matriz[i][i];
			}
			
            for(i=n-1;i>=0;i--){
				soma2+= matriz[i][n-i-1];
			}

            if(soma != soma2)
				eh_magico=0;

            if(eh_magico)
				printf("Eh quadrado magico");
				
            else
				printf("Nao eh quadrado magico.\n");
        }
        else
			printf("Nao eh quadrado magico.\n");
    }
    else
		printf("Nao eh quadrado magico.\n");

    return 0;
}
