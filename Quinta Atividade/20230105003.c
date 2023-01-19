#include <stdio.h>
#include <stdlib.h>

void vPerfeito(int n){
    int cont, ac=0;
    
    for(cont=1; cont<n; cont++){
        if(n%cont==0){
           ac+=cont;
        }
    }
    if(ac==n)
               printf("\nNumero perfeito");
    else
        printf("\nNao e numero perfeito");
}

int vPar(){
	int num;
	do{
		printf("\nEntre com um numero: ");
	    scanf("%d", &num);
	    
	    if(num%2==0)
	    	return num;
	    else	
	    	printf("\nDigite um numero par!");
	    	
	}while(num%2!=0);
}

int main(){
	vPerfeito(vPar());
    return 0;
}
