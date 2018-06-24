#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap( int *x, int *y) {
	int t;
	
	t = (*x);
	(*x) = (*y);
	(*y) = t;
}

void main() {
	int x, y;
	
	srand(time(NULL));
	x = rand() % 100 + 1;
	y = rand() % 100 + 1;
	
	printf("%d %d\n", x, y);
	swap( &x, &y);
	printf("%d %d\n", x, y);
		
	return;
}