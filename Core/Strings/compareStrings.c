#include <stdio.h>

int getStrSize(char *s) {
	int n=0;
	
	while(s[n] != '\0'){
		n++;
	}
	
	return n;
}

int compare(char *s1, char *s2) {
	
	int compFlag = 1;
	int i =0;
	int result = 0;
	
	if( getStrSize(s1) ==  getStrSize(s2) ){
		while(s1[i] != '\0') {
			if(s1[i] != s2[i]) {
				compFlag = 0;
				break;
				}
			i++;
			}
		}
	else {
		compFlag = 0;
	}
	
	if (compFlag == 0) {
		return 0;
	}
	else {
		return 1;
	}
}

void main() {
	char *s1 = "Some text";
	char *s2 = "Some text 2";
	
	int c = compare(s1,s2);
	if(c == 0) {
		printf("Strings Different\n");
	}
	else {
		printf("Strings are the same\n");
	}
}