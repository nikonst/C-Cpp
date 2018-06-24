#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void main() {
	
	int i, min, max, a[N];
	
	srand(time(NULL));
	for(i = 0; i < N ; i++) {
		a[i] = rand() % 100 + 1;
	}
	
	printf("Array:\n");
	for(i = 0; i < N ; i++) {
		printf("%d\n",a[i]);
	}
	
	min = a[0];
	for(i = 1; i < N; i++){
		if (min > a[i]) {
			min = a[i];
		}
	}
	printf("Min = %d\n", min);
	
	max = a[0];
	for(i = 1; i < N; i++){
		if (max < a[i]) {
			max = a[i];
		}
	}
	printf("Max = %d\n", max);
	
	return;
}