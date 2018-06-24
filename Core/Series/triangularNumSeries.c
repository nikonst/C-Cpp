/* Triangular Numbers Series */

#include <stdio.h>

void main() {
	int n = 10, s = 0, i, k;
	
	for(i = 0;i <= n ;i++){
		k = (i*(i+1))/2;
		printf("%d ", k);
		s += k;
	}
	printf("\n S = %d", s);
	return;
}