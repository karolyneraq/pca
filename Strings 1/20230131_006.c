#include <stdio.h>
#include <string.h>

int main()  {
    char string[100], inversa[100];
    int i, j, len, cont;
    int comp;

    printf("Digite uma string: ");
    scanf("%s", string);
    len = strlen(string);
    cont = len;

    for (i = 0; i < len ; i++)  {
        cont--;
        inversa[i] = string[cont];
    }

    comp = strcmp(string, inversa);
    if (comp == 0)  {
        printf("Eh palindromo!");
    }
    else    {
        printf("Nao eh palindromo :/");
    }

    return 0;
}
