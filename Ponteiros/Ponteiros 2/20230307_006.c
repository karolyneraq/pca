#include <stdio.h>

int soma_vet(int *v1_ei, int *v1_ef, int *v2_ei, int *v2_ef, int *v3_ei){
	int len_v1, len_v2, *i, *j;
	
	len_v1 = v1_ef-v1_ei;
	len_v2 = v2_ef-v2_ei;
	
	if(len_v1 != len_v2)
		return 0;
	
	for(i=v1_ei, j=v2_ei; i<=v1_ef; i++, j++){
		*v3_ei = *i+*j;
		v3_ei++;
	}
	
	return 1;
}

int main(){
	int v1 [] = {1, 2, 3, 4};
	int v2 [] = {2, 4, 6, 7};
	int v3 [10];
	int val, i;
	
	val = soma_vet(&v1[0], &v1[3], &v2[0], &v2[3], &v3[0]);
	
	if(val == 0){
		printf("Os tamanhos dos vetores sao diferentes");
	}
	
	else{
		for(i = 0; i < 4; i++){
			printf("%d ", v3[i]);
		}
	}
	
	return 0;
}
