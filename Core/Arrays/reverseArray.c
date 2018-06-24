#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int * reverseArray(int *a) {
	int i, *b;
	
	for(i = N-1; i >= 0; i--) {
		b[N-i-1] = a[i];
	}
	return b;
}

void main() {
	
	int i, *a, *r;
	
	srand(time(NULL));
	for(i = 0; i < N ; i++) {
			a[i] = rand() % 100 + 1;
	}
	
	printf("Array:\n");
	printf("-----:\n");
	for(i = 0; i < N ; i++) {
			printf("%6d\n",a[i]);
	}
	
	r = reverseArray(a);
	
	printf("Reversed Array:\n");
	printf("--------------:\n");
	for(i = 0; i < N ; i++) {
			printf("%6d\n",r[i]);
	}
	return;
}