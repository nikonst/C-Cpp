/* count Vowels in a String */
/* A, E, I, O, U, and  Y */

#include <stdio.h>

void main() {
	int index, n;
	int a = 0, e = 0, i = 0, o = 0, u = 0, y = 0;
	
	char s[] = "Without music, life would be a mistake."; // Friedrich Nietzsche
	
	n = sizeof(s)/sizeof(char);
	
	printf("%s\n",s);
	for(index = 0; index < n; index++) {
		switch(s[index]) {
			case 'a':
			case 'A': a++; break;
			case 'E':
			case 'e': e++; break;
			case 'I':
			case 'i': i++; break;
			case 'O':
			case 'o': o++; break;
			case 'U':
			case 'u': u++; break;
			case 'Y':
			case 'y': y++; break;
			default: break;
		}
	}
	printf("a - %d\n",a);
	printf("e - %d\n",e);
	printf("i - %d\n",i);
	printf("o - %d\n",o);
	printf("u - %d\n",u);
	printf("y - %d\n",y);
	return;
}