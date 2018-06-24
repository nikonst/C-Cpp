/* 
Given a string, return true if it ends in "ly".


endsLy("oddly") → true
endsLy("y") → false
endsLy("oddy") → false

http://codingbat.com/prob/p103895
*/
#include <stdio.h>
#include <string.h>

int endsLy(char *s) {
	int size = strlen(s);
	
	if(s[size-1] == 'y' && s[size-2] == 'l') {
		return 1;
	}
	else {
		return 0;
	}
}

void main() {
	
	char *s1 = "Hello", *s2 = "Helloly";
	
	puts(s1);
	if (endsLy(s1) == 1) {
		printf("-True\n");
	}
	else {
		printf("-False\n");
	}
	
	puts(s2);
	if (endsLy(s2) == 1) {
		printf("-True\n");
	}
	else {
		printf("-False\n");
	}
}