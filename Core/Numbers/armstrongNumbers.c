/*
Armstrong Numbers

https://en.wikipedia.org/wiki/Narcissistic_number
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int checkArmstrong(int n) {
	int t = n;
	int k[10], i, getDigit, countDigits = 0;
	int armNumber;
	
	for(i=0;i<10;i++) {
		k[i]=0;
	}
	
	//count digits
	int index = 0;
	while (t != 0) {
		getDigit = t % 10;
		t /= 10;
		k[countDigits] = getDigit;
		countDigits++;
	}
	
	// Compute Sum
	armNumber = 0;
	for(i = 0; i < 10; i++) {
		armNumber += pow(k[i],countDigits);
	}
		
	if(armNumber == n){
		return 1; //"ARMSTRONG"
	}
	else {
		return 0; //"NOT Armstrong"
	}
}

void main() {
	int i, z = 0;
	
	for(i = 1; i <= 1000000; i++) {
		z = checkArmstrong(i);
		if(z == 0) {
			
		}
		else {
			printf("%7d ARMSTRONG NUMBER\n",i);
		}
	} 
	return;
}