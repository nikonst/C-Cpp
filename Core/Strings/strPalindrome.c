#include <stdio.h>

int checkPalidrome(char *s, int n ) {
	int i, mid = n / 2;
	int flag = 0;
	
	for(i=0;i<n;i++) {
		printf("%c\n",s[i]);
	}
	
	for(i = 0; i < mid ; i++) {
		//printf("i=%d, s[i]=%c, s[n-i-1]=%c\n",i,s[i],s[n-i-2]);
		if (s[i] == s[n-i-2]) {
			flag = 1;
		}
		else {
			flag = 0;
			break;
		}
	}
	
	return flag;
}

void main() {
	
	char str1[] = "anna";
	char str2[] = "programming";
	char str3[] = "abcddcba";
	
	int result; // result - 1 --> Palindrome, result - 0 --> Not a palindrome

	result = checkPalidrome(str1,sizeof(str1)/sizeof(char));
	printf("Result=%d\n",result);
	
	result = checkPalidrome(str2,sizeof(str2)/sizeof(char));
	printf("Result=%d\n",result);

	result = checkPalidrome(str3,sizeof(str3)/sizeof(char));
	printf("Result=%d\n",result);

	return;
}
