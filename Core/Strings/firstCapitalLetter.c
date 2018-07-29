/* Find First Capital Letter */

#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int findFirstCapitalPosition(char *s) {
	
	int i =0, index=0;
	while(s[i] != '\n' && i <= strlen(s))
	{
		if( isupper(s[i]) ) {
			index = i;
			break;
		}
		i++;
	}
	return index;
}

int main() {

	char *str = "heLloString";
	int k = findFirstCapitalPosition(str);
	
	printf("%d\n", k);	
	return 0;
}