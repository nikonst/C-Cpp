#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int queue[N], f = 0, r = 0;

void enqueue(int k) {
	int i;
	if(r < N) {
		for(i = r; i > 0; i--) {
			queue[i] = queue[i - 1];
		}
		queue[0] = k;
		r++;
	}
	else {
		printf("FULL\n");
	}
}

void dequeue() {
	
	if(r > 0 ) {
		queue[r - 1] = 0;
		r--;
	} else {
		queue[0] = 0;
	}
}

int isEmpty() {
	int i;
	
	if(queue[0] == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

void printQ() {
	int i = 0;
	
	while(queue[i] != 0 && i <N){
		printf("%d\n", queue[i]);
		i++;
	}
	
}

int main () {
	int i;
	
	for(i = 0; i< N; i++) {
		queue[i] = 0;
	}
	
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	enqueue(60);
	enqueue(70);
	enqueue(80);
	enqueue(90);
	enqueue(100);
	enqueue(110);
	enqueue(110);
	printQ();
	printf("\nf=%d r=%d\n",f,r);
	dequeue();
	dequeue();
	printQ();
	printf("\nf=%d r=%d\n",f,r);
	enqueue(400);
	printQ();
	printf("\nf=%d r=%d\n",f,r);
	
	return 0;
}