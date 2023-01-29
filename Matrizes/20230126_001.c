#include <stdio.h>

int main(){
	int i, j;
	int m1[3][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
	int m2[3][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}};
	
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){
			printf("%d ", m1[i][j]+m2[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

