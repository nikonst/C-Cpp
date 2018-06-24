/* Sum of digits */

#include <stdio.h>

void main() {
	int n = 12345, s = 0, m = 0;
	
	while (n != 0) {
		m += n % 10;
		n /= 10;
		printf("m = %d, n = %d\n",m,n);
	}

	printf("Sum of digits = %d", m);
	return;
}