#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3
#define M 2

void main() {
	int a[M][N], b[N][M], c[M][M];
	int i, j, k;

	srand(time(NULL));
	for(i = 0; i < M ; i++) {
		for(j = 0; j < N ; j++) {
			a[i][j] = rand() % 10 + 1;
		}
	}
	
	srand(time(NULL));
	for(i = 0; i < N ; i++) {
		for(j = 0; j < M ; j++) {
			b[i][j] = rand() % 10 + 1;
		}
	}

	printf("Matrix A:\n");
	for(i = 0; i < M ; i++) {
		for(j = 0; j < N; j++) {
			printf("%5d ", a[i][j]);
		}
		printf("\n");
	}
	
	printf("Matrix B:\n");
	for(i = 0; i < N ; i++) {
		for(j = 0; j < M; j++) {
			printf("%5d ", b[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < M ; i++) {
		for(j = 0; j < M; j++) {
			c[i][j] = 0;
		}
	}
	
	for(i=0; i<M; i++ ) {
        for(j=0; j<M; j++) {
            for(k=0; k<N; k++){
               c[i][j]+=a[i][k]*b[k][j];
            }
		}
	}
	
	printf("The Matrix C:\n");
	for(i = 0; i < M ; i++) {
		for(j = 0; j < M; j++) {
			printf("%5d ", c[i][j]);
		}
		printf("\n");
	}
	return;
}