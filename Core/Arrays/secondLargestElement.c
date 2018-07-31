 /* Write a program in C to find the second largest element in an array. */
 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 
 #define N 10
 
 int findSecondLargestElement(int *p) {
	int i, maxindex, max = p[0], secondMax = p[0];
	for(i = 1; i < N; i++) {
		if( p[i] > max ) {
			max = p[i];
			maxindex = i;
		}
	}
	
	for(i = 1; i < N; i++) {
		if(i == maxindex) {
			continue;
		}
		if( p[i] > secondMax ) {
			secondMax = p[i];
		}
	}
	
	return secondMax;	
 }
 
 
 int main() {
	int i, a[N];
	
	time_t t;
   
	srand((unsigned) time(&t));

	for(i = 0; i < N; i++) {
		a[i] = rand() % 100 + 1;
	}
	
	for(i = 0; i < N; i++) {
		printf("%d\n",a[i]);
	}
	
	printf("*************\nSecond Largest Element:\n");
	printf("%d\n", findSecondLargestElement(a));
	
	return 0;
 }