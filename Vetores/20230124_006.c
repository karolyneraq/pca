#include <stdio.h>


void selection(int array[100], int num){
	int i, j, aux, achou=0;
    int pos, menor;
    
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
    
    printf("\nArray Ordenado: ");
    
    for(i=0; i<num; i++){
    	
        printf("%d ", array[i]);
        
    }
}


int main()  {
    int array[100], num, i;

    printf("Quantos elementos o vetor tera?: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)  {
        printf("Digite um numero: ");
        scanf("%d", &array[i]);
    }
    
    selection(array, num);

    return 0;
}
