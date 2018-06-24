/* Magic Square Check */

#include <stdio.h>
#define N 3

void main() {
	int a[N][N] = { {2,7,6}, {9,5,1}, {4,3,8} };
	int i, j;
	int sumRows[N], sumCols[N], sumDiag = 0, sumSecDiag = 0;
	
	for(i = 0; i < N; i++) {
		sumRows[i] = 0;
		sumCols[i] = 0;
	}
	
	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++){
			sumRows[i] += a[i][j]; 
		}
	}
	
	for(j = 0; j < N; j++) {
		for(i = 0; i < N; i++){
			sumCols[j] += a[i][j]; 
		}
	}
	
	for(i = 0; i < N; i++) {
		printf("%d\n",sumRows[i]);
	}
	
	for(i = 0; i < N; i++) {
		printf("%d\n",sumCols[i]);
	}

	for( i = 0, j = 0 ; i < N , j < N; i++, j++) {
		sumDiag += a[i][j];
	}
	printf("sumDiag = %d\n", sumDiag);
	
	for( i = 0, j = N - 1; i < N , j >= 0; i++, j--) {
		sumSecDiag += a[i][j];
	}
	printf("sumCols = %d\n", sumSecDiag);
	
	int isMagicSquare = 1;
	int flagRows = 0;
	int flagCols = 0;
	
	if (sumDiag == sumSecDiag && sumDiag == sumRows[0] && sumDiag == sumCols[0]) {
		for(i = 1; i< N; i++) {
			if (sumRows[0] != sumRows[i] ) {
				flagRows++;
				break;
			}
		}
		if (flagRows == 0) {
			
			for(i = 1; i< N; i++) {
				if (sumCols[0] != sumCols[i]) {
					flagCols++;
					break;
				}
			}
		}
	}
	else {
		isMagicSquare = 0;
	}

	if( isMagicSquare == 1 && flagRows == 0 && flagCols == 0) {
		printf("MAGIC SQUARE !!!\n");
	}
	else {
		printf("Not a Magic Square!\n");
	}
	return;
}