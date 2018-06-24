/* 
Compute s = 1/2^1 + 1/2^2 + 1/2^3 + .... +1/2^n
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <float.h>
#include <math.h>

void main() {
	int i, n;
	double s = 0;
	
	srand(time(NULL));
	n = rand() % 100 + 2;
	printf("n=%d\n",n);
	for(i = 1; i < n; i++) {
		s += (double)1/pow(2,i);
	}
	
	printf("s=%lf",s);

	return;
}
