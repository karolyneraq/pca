#include <stdio.h>

void imprimeVet(float *endInic, float *endFinal){
    float *pvet;
    for(pvet = endInic; pvet<=endFinal; pvet++){
        printf("%.2f ", *pvet);
    }
}

int main()
{
    float v1[] = {2, 3, 6, 1, 7};
    float v2[] = {0, 1.4, 0.3};
    float v3[] = {5.51, 2.72, 9.95, 4.28};

    printf("Vetor 1 do elemento 2 ao 4: ");
    imprimeVet(&v1[2], &v1[4]);
    
    printf("\nVetor 2 do elemento 0 ao 1: ");
    imprimeVet(&v2[0], &v2[1]);
    
    printf("\nVetor 3 do elemento 1 ao 3: ");
    imprimeVet(&v3[1], &v3[3]);
    
    return 0;
}
