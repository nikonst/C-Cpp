#include <stdio.h>

int factorial(int n) {
	if(n == 0) {
		return 1;
	}
	else {
		return n*factorial(n-1);
	}
}

void main() {
	int i;
	for(i = 0;i <= 12; i++) {
		printf("%3d -- %9d\n", i, factorial(i));
	}
	return;
}