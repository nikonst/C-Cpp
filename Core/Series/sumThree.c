/* 
Compute s = 1/ar^0 + 1/ar^2 + 1/ar^3 + .... +1/ar^n
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <float.h>
#include <math.h>

void main() {
	int i, n;
	double a, r, s = 0;
	
	srand(time(NULL));
	a = ((float)rand()/(float)(RAND_MAX));
	r = ((float)rand()/(float)(RAND_MAX));
	n = rand() % 100 + 2;
	
	printf("n=%d a=%f r = %f\n",n,a,r);
	for(i = 1; i < n; i++) {
		s += (double)1/(a*pow(r,i));
	}
	
	printf("s=%lf",s);

	return;
}
