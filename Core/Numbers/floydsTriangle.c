/* Floyd's Triangle 

https://en.wikipedia.org/wiki/Floyd%27s_triangle */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

	int i, j, a = 1, n;
	n = rand() % 100 + 1;
	
	printf("n=%d",n);
	printf("-----");
	for(i = 1; i < n; i++) {
		for(j = 1; j < i; j++) {
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
	return;
}