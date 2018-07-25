/*
Pandigital prime
Problem 41 - Project Euler

We shall say that an n-digit number is pandigital if it makes use of all the digits 1 to n exactly once. 
For example, 2143 is a 4-digit pandigital and is also prime.

What is the largest n-digit pandigital prime that exists?
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int myPower(int base, int exp) {
	int i, g = 1;
	
	for(i = 1; i <= exp; i++) {
		g = g * base;
	}
	return g;
}

int maxPandigitalNumber(int n){
	int i, k = 0;
	
	for(i = n; i > 0; i--){
		k = k + i*myPower(10,i-1);
	}
	
	return k;
}


int main() {
	
	int numberOfDigits;
	for(int i = 2; i < 10; i ++) {
		printf("%d\n", maxPandigitalNumber(i));
	} 
	return 0;
}

/*
Output:

21
321
4321
54321
654321
7654321
87654321
987654321
 */
