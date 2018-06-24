#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3

void main() {
	int n, a[N][N],m[N][N];
	int i,j;
	
	srand(time(NULL));
	for(i = 0; i < N ; i++) {
		for(j = 0; j < N ; j++) {
			a[i][j] = rand() % 10 + 1;
		}
	}
	
	printf("The Matrix:\n");
	for(i = 0; i < N ; i++) {
		for(j = 0; j < N; j++) {
			printf("%5d ", a[i][j]);
		}
		printf("\n");
	}
	
	srand(time(NULL));
	n = rand() % 10 + 1;
	printf("n=%d :\n",n);
	
	for(i = 0; i < N ; i++) {
		for(j = 0; j < N; j++) {
			m[i][j] = a[i][j] * n;
		}
	}

	printf("The Matrix multiplied by n:\n");
	for(i = 0; i < N ; i++) {
		for(j = 0; j < N; j++) {
			printf("%5d ",m[i][j]);
		}
		printf("\n");
	}
	
	return;
}

