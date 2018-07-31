/* Write a program in C to print or display upper triangular matrix */

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 
 #define N 5
 
 int main() {
	int i, j, a[N][N];
	
	time_t t;
   
	srand((unsigned) time(&t));
 
	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++){
			a[i][j] = rand() % 100 + 1;
		}
	}
	
	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++){
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
 
 	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++){
			if( j > i ){
				a[i][j] = 0;
			}
		}
		printf("\n");
	}
  
	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++){
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
 }
