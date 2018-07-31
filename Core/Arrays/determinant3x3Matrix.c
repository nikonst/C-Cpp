/* Write a program in C to calculate determinant of a 3 x 3 matrix. */

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 
 #define N 3
 
 int main() {
 
	int i, j, a[N][N], determinant = 0;
	
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
 
	for(i = 0; i < N; i++)
      determinant = determinant + (a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3] - a[1][(i+2)%3]*a[2][(i+1)%3]));
 
	printf("Determinant: %d", determinant);
	return 0;
 }