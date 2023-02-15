#include <stdio.h>
#include <string.h>
#define max 100

int main()  {
    char string[max], novaString[max];
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    char key[] = "DEFGHIJKLMNOPQRSTUVWXYZABC";
    int i, j, len;

    printf("Digite uma string: ");
    scanf("%s", string);
    len = strlen(string);

    for (i = 0; i < len; i++)   {
        for (j = 0; j < 26; j++)    {
            if (string[i] == alphabet[j])   {
                novaString[i] = key[j];
            }
        }
    }
    printf("String criptografada: %s", newString);

    return 0;
}
