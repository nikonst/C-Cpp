/* Palindromic number */

#include <stdio.h>

int reverseNumber(int n) {
	int reverse = 0, remain;
	
	while( n!=0 )
    {
        remain = n%10;
        reverse = reverse*10 + remain;
        n /= 10;
    }
	return reverse;
}

int main() {
	int i, r;
	
	for(int i = 10;i < 10000; i++){
		r = reverseNumber(i);
		if(i == r){
			printf("Palidromic Number: %d\n",i);
		}
	}
	return 0;
}