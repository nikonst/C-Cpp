/* Square Numbers Series */

#include <stdio.h>
#include <math.h>

void main() {
	int n = 10, s = 0, i, k;
	
	for(i = 1;i <= n ; i++){
		k = pow(i,2);
		printf("%d ", k);
		s += k;
	}
	printf("\n S = %d", s);
	return;
}