#include <stdio.h>

void checkAbundance(int n) {
	int i, s = 0;
	
	for(i=1;i<n;i++) {
		if(n%i == 0){
			s+=i;
		}
	}
	if(s > n){
		printf("Abundant Number -> %d\n", n);
	}
}

int main(){
	int i;
	printf("Abundant Numbers from 1 to 1000.\n");
	for(i = 1; i<=1000; i++) {
		// printf("\n******%d",i);
		checkAbundance(i);
		
	}
	return 0;
}