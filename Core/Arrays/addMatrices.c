#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

void main() {
	int n, a[N][N],b[N][N],c[N][N];
	int i,j;
	
	srand(time(NULL));
	for(i = 0; i < N ; i++) {
		for(j = 0; j < N ; j++) {
			a[i][j] = rand() % 10 + 1;
		}
	}
	
	srand(time(NULL));
	for(i = 0; i < N ; i++) {
		for(j = 0; j < N ; j++) {
			b[i][j] = rand() % 10 + 1;
		}
	}
	
	printf("The Matrix A:\n");
	for(i = 0; i < N ; i++) {
		for(j = 0; j < N; j++) {
			printf("%5d ", a[i][j]);
		}
		printf("\n");
	}
	
	printf("The Matrix B:\n");
	for(i = 0; i < N ; i++) {
		for(j = 0; j < N; j++) {
			printf("%5d ", b[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < N ; i++) {
		for(j = 0; j < N; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	printf("The Matrix C:\n");
	for(i = 0; i < N ; i++) {
		for(j = 0; j < N; j++) {
			printf("%5d ",c[i][j]);
		}
		printf("\n");
	}
	
	return;
}
