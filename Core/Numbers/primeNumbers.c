// Prime numbers from 1 to 1000

#include <stdio.h>
#include <stdbool.h>

void main() {
	bool prime;
	int i,j;
	
	for(i = 1; i <= 1000; i++) {
		for(j = 2; j < = i-1; j++) {
			prime = true;
			if(i % j == 0){
				prime = false;
				break;
			}
		}
		if (prime == true) {
			printf("%d number prime\n",i);
		}
	}
	return;
}
