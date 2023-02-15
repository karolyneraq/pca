#include <stdio.h>
#include <math.h>


int main(void)  {
    int n, i, p;
    float m;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);


    for (i = 2; i < n; i++)    {
        m = sqrt(i);
        p = m;

        if (m == p) {
            printf("%d ", i);
        }
    }

    return 0;

}
