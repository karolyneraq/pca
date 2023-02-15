#include <stdio.h>
#include <stdlib.h>

int compara(int x, int y){

    if (y > x)
		return 0;

    else{

        int d, e;

        d = x%10;
        e = y%10;
        x = x/10;
        y = y/10;

        if (d != e)
			return 0;

        while (y > 0){

            if (d != e)
				return 0;

            d = x%10;
            e = y%10;
            x = x/10;
            y = y/10;

        }

        return 1;

    }
}

int segmento(int x, int y){

    if (y > x)
		return 0;

    else{

        if (compara(x, y))
			return 1;

        else
			x = x/10;

        while(x > 0){

            if (compara(x, y))
				return 1;
            else{

                x = x/10;
            }
        }

        return 0;

    }
}

int main(){

    int x, y;
	
	printf("Digite valores para x e y: ");
	scanf("%d %d", &x, &y);
	
	if(segmento(x, y)==0)
		printf("\nEh um segmento");
	else
		printf("\nNao eh um segmento");

	return 0;
}
