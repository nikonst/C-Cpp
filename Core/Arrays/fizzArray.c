/* fizzArray3 - http://codingbat.com/java/Array-2

Given start and end numbers, return a new array containing the sequence of 
integers from start up to but not including end, so start=5 and end=10 yields {5, 6, 7, 8, 9}.
The end number will be greater or equal to the start number. Note that a length-0 array is valid. 


fizzArray3(5, 10) → [5, 6, 7, 8, 9]
fizzArray3(11, 18) → [11, 12, 13, 14, 15, 16, 17]
fizzArray3(1, 3) → [1, 2]
*/

#include <stdio.h>

void fizzArray3(int start, int end, int *a) {
	int i;
	
	int base = start;
	printf("\nstart = %d, end = %d \n",start, end);
	printf("\n");
	for(i = 0; i < (end - start); i++){
		*(a+i) = base++;
	 }
	 
	 for(i = 0; i < (end - start) ; i++) {
			printf("%4d",a[i]);
	 }
	return;
}

void main() {
	int i;
	int *a;
	
	fizzArray3(2,10,a);
	fizzArray3(1,3,a);
	fizzArray3(11,18,a);
	
	return;
}