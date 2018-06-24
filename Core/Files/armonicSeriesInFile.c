/* Armonic Series */

#include <stdio.h>

void main() {
	int i;
	float term, s = 0;
	FILE *fp;

	fp = fopen("aseries.txt", "w");
	for(i = 1; i < 50; i++){
		term = (float) 1/i;
		printf("%f\n", term);
		fprintf(fp, "%f  ", term);
		s += term;
	}

	printf("S = %f\n", s);
	fclose(fp);
	return;
}