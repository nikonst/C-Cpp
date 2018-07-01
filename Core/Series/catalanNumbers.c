#include <stdio.h>

long int factorial(int n) {
	int i;
	long int g = 1;
	if (n == 0) {
		return 1;
	}
	else {
		for(i = 1; i <= n; i++) {
			g *= i;
		}
	return g;
	}
}

int main() {
	int i;
	long int term, s = 0;
	
	for(i = 0; i < 11; i++) {
		term = factorial(2*i) / (factorial(i+1) * factorial(i));
		printf("\n%d", term);
		s += term;
	}
	printf("\nS = %d", s);
	return 0;
}