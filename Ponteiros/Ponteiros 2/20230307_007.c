#include <stdio.h>

void substitui(int *ei, int *ef, int *min, int *max){
	int *i;
	*min = *ei;
	*max = *ei;
	
	for(i = ei+1; i<=ef; i++){
		if(*i < *min)
			*min = *i;
			
		if(*i > *max)
			*max = *i;
	}
}

int main (){
	int v [] = {1, 2, 3, 1, 9, 6, 9, 7};
	int max, min;
	
	substitui(&v[0], &v[7], &min, &max);
	
	printf("min = %d, max = %d", min, max);
	
	return 0;
}
