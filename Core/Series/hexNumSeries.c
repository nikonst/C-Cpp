/* Hexagonal Numbers Series 

https://en.wikipedia.org/wiki/Hexagonal_number */

#include <stdio.h>
#include <math.h>

void main() {
	int n = 10, s = 0, i, k;
	
	for(i = 1;i <= n ; i++){
		k = 2*pow(i,2) - i;
		printf("%d ", k);
		s += k;
	}
	printf("\n S = %d", s);
	return;
}