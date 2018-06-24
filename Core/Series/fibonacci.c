/* Fibonacci sequence */
#include <stdio.h>

void main() {
	int i, currentSum, beforeOne = 1, beforeTwo = 0;
	
	for(i=0;i<=30;i++) {
		if(i<=1) {
			currentSum = i;
			printf("%d\n",currentSum);
		}
		else{
			currentSum = beforeOne + beforeTwo;
			printf("%d\n",currentSum);
			beforeTwo = beforeOne;
			beforeOne = currentSum;	
		}
	}
}