#include <stdio.h>
#include <math.h>

#define N 30

int main() {
	int i, a = 2, ratio = 2;
	
	for(i = 1; i < N ; i++) {
		printf("%5.2f \n", a * pow(ratio,(i-1)));
	}
	return 0;
}