#include <stdio.h>

int str_len(char *s) {
	int i = 0;
	
	while(s[i] != '\0') {
		i++;
	}
	return i;
}

void main() {

	char *s = "C Programming";
	
	printf("\nString:");
	puts(s);
	printf("String lentgh: %d", str_len(s));

	return;
}