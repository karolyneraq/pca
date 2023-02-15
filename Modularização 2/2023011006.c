#include <stdio.h>
#include <math.h>

int binario(int dec){
	int bi, i;
	
	for (i=0; dec>0; i++){
    	
        bi += dec%2 * pow(10, i);
              dec/=2;
              
    }
    
    return bi;
	
}

int main(){
    int dec;
    
    printf("Digite um numero decimal: ");
    scanf("%d", &dec);
    
    printf("O numero binario eh: %d", binario(dec));
    
    return 0;
}
