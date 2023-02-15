#include <stdio.h>
#include <stdio.h>

int main(void)  {
    int m, n, x, y;
    int x_max = 0, y_max = 0;
    int valor, valor_max = 0;

    printf("Digite um inteiro positivo(m): ");
    scanf("%d", &m);
    printf("Digite um inteiro positivo(n): ");
    scanf("%d", &n);

    x = 0;
    while (x <= m)  {
        y = 0;

        while (y <= n)  {
            valor = (x*y) - pow(x, 2) + (y);

            if (valor > valor_max)  {
                valor_max = valor;
                x_max = x;
                y_max = y;
            }
            y++;
        }
        x++;
    }
    printf("O valor maximo da expressao para x em [0, %d] e y em [0, %d] eh igual a %d", m, n, valor_max);
    printf("O valor maximo ocorre para os valores (x, y) = (%d, %d)", x_max, y_max);

    return 0;
}
