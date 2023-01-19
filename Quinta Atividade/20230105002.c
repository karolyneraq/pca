#include <stdio.h>
#include <stdlib.h>
float peso;
int semanas;

void avaliaParto(){
        int meses;
        if(peso<100||semanas<28)
            printf("\nParto nao devera ser realizado, reavaliar clinicamente");
        else{
            meses = (int)semanas/4;
            if(peso>2500&&meses>7)
                printf("\nParto normal");
            else{
                if(peso>2500&&meses<=7)
                    printf("\nParto Cesariana");
                else{
                    if(peso<2000 && peso>1500 && semanas>9)
                        printf("\nParto normal");
                    else
                        printf("\nParto Cesariana");
                }
            }
        }
}

void scanInfor(){
    printf("Digite o peso do feto em gramas: ");
    scanf("%f", &peso);

    printf("\nDigite o numero de semanas da gestacao: ");
    scanf("%d", &semanas);
}

int main (){
    scanInfor();
    avaliaParto();
	return 0;
}
