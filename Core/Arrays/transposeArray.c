#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3
#define M 2

void main() {
	int i, j;
	int a[N][M], b[M][N];
	
	srand(time(NULL));
	for(i = 0; i < N ; i++) {
		for(j = 0; j < M ; j++) {
			a[i][j] = rand() % 100 + 1;
		}
	}

	printf("Array a:\n");
	printf("-------:\n");
	for(i = 0; i < N ; i++) {
		for(j = 0; j < M ; j++) {
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	// transpose the array a 
	for(j = 0; j < M; j++) {
		for(i = 0; i < N; i++) {
			b[j][i] = a[i][j];
		}
	}

	printf("Array Transposed:\n");
	printf("----------------:\n");
	for(i = 0; i < M ; i++) {
		for(j = 0; j < N ; j++) {
			printf("%3d", b[i][j]);
		}
		printf("\n");
	}
	
	return;
}