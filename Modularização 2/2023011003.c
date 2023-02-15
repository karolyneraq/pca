#include <stdio.h>

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

int main (){
	int x, y;
	
	printf("Digite valores para x e y: ");
	scanf("%d %d", &x, &y);
	
	if(compara(x, y)!=0)
		printf("Os valores se correspondem");
	else
		printf("Os valores nao se correspondem");
	
	
	
	return 0;
}
