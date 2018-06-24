/* The Taylor series for the exponential function e^x */

#include <stdio.h>
#include <math.h>

int factorial(int n) {
	int i,f = 1;
	
	if(n == 0){
		f = 1;
	}
	else {
		for(i = 1; i<=n; i++) {
			f *= i;
		}
	}
	return f;
}

void main() {
	double s = 0;
	int i, x = 1, n = 20;
	
	for(i = 0; i<=n; i++) {
		
		s+=(pow(x,i)/factorial(i));
	}
	
	printf("For x=%d and n=%d, S = %lf\n", x, n, s);
}