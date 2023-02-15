#include <stdio.h>
#include <string.h>
#include <string.h>

int main(){
    int i;
    
    char carros[5][200];
    printf("Digite 5 modelos de carros:\n");
    for(i=0;i<5;i++){
        scanf("%s", carros[i]);
    }

    printf("\nDigite o consumo desses modelos(quantos km/l cada um faz).\n");
    int consumo[5];

    for (i=0; i<5; i++){
        scanf("%d", &consumo[i]);
    }

    printf("O mais economico eh: ");
    int economico = 0;
    for (i=1;i<5;i++){
        if (consumo[i]>consumo[economico]){
            economico = i;
        }
    }
    printf("%s\n\n", carros[economico]);

    float litros;
    for (i=0;i<5;i++){
        litros = 1000.0/consumo[i];
        printf("O modelo %s consome %.2f litros ao percorrer 1.000km\n\n", carros[i], litros);
    }

}
