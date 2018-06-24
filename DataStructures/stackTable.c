#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void push(int *s, int k) {
	int i = 0;
	if (s[N-1] == 0) {
		while(s[i] != 0 && i < N) {
			i++;
		}
		s[i] = k;
		printf("%d, Done...\n", k);
	}
	else {
		printf("FULL\n");
	}
}

void pop(int *s) {
	int i = 0;
	while(s[i] != 0 && i < N) {
		i++;
	}
	s[i-1] = 0;
}

void printStack(int *s) {
	int i = 0;
	printf("\n******\n");
	while(s[i] != 0 && i < N) {
		printf("%d\n",s[i]);
		i++;
	}
}

int main() {
	
	int *stack; // stack size
	int i;
	stack = (int*) calloc(N, sizeof(int));
	for(i = 0; i < N; i++) {
		stack[i] = 0;
	}
		
	srand(time(NULL));
	push(stack, rand() % 100 + 1);
	push(stack, rand() % 100 + 1);
	push(stack, rand() % 100 + 1);
	push(stack, rand() % 100 + 1);
	printStack(stack);
	 
	push(stack, rand() % 100 + 1);
	push(stack, rand() % 100 + 1);
	printStack(stack);
	 
	pop(stack);
	pop(stack);
	printStack(stack);
	 
	push(stack, rand() % 100 + 1);
	push(stack, rand() % 100 + 1);
	push(stack, rand() % 100 + 1);
	push(stack, rand() % 100 + 1);
	push(stack, rand() % 100 + 1);
	push(stack, rand() % 100 + 1);
	push(stack, rand() % 100 + 1);
	push(stack, rand() % 100 + 1);
	push(stack, rand() % 100 + 1);
	push(stack, rand() % 100 + 1);
	printStack(stack);
	
	return 0;
}