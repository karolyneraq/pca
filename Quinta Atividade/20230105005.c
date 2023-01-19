#include <stdio.h>
#include <stdlib.h>

int fib(int n){
	int pri=0, seg=1, prox=0, cont;
    printf("%d",seg);
    for(cont=1; cont<n; cont++){
                prox=pri+seg;
                pri=seg;
                seg=prox;
                printf(" %d", prox);
    } 
}

int main(){
	int termos;
    printf("Digite o numero de termos: ");
    scanf("%d", &termos);
    
    fib(termos);
    return 0;
}
