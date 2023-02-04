#include <stdio.h>
#define max 100

int main()  {
    int array[max], sorted_array[max], i, j, num;
    int aux, achou=0;
    int pos, menor;

    printf("Quantos elementos o vetor tera?: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)  {
        printf("Digite um numero: ");
        scanf("%d", &array[i]);
    }
    for (i = 0; i < num; i++)   {
        menor = array[i];
        for (j = i+1; j < num; j++)   {
            if (array[j] < menor)   {
                menor = array[j];
                pos = j;
                aux = array[i];
                achou = 1;
            }
        }
        if(achou==1){
            array[i] = menor;
            array[pos]= aux;
        }
    }
    printf("\n");
    for(i=0; i<num; i++){
        printf("%d ", array[i]);
    }

    return 0;
}
