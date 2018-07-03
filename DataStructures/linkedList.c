#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node {
	int data;
	struct node * next;
} node_type;


void print_list(node_type * head) {
    node_type * currentNode = head;

    printf("[ ");
	while (currentNode != NULL) {
        printf("%d ", currentNode->data);
        currentNode = currentNode->next;
    }
	printf("]\n");
}

void push(node_type * head, int data) {
    node_type * currentNode = head;
    /*if(currentNode->next == NULL) {
		currentNode->data = data;
		currentNode->next = NULL;
		
	}
	else { */
	while (currentNode->next != NULL) {
        currentNode = currentNode->next;
    }

    currentNode->next = malloc(sizeof(node_type));
    currentNode->next->data = data;
    currentNode->next->next = NULL;
	//}
}

int pop_last(node_type * head) {
    int returnData = 0;
    /* if there is only one item in the list, remove it */
    if (head->next == NULL) {
        returnData = head->data;
        free(head);
        return returnData;
    }

    /* second to last node */
    node_type * currentNode = head;
    while (currentNode->next->next != NULL) {
        currentNode = currentNode->next;
    }

    returnData = currentNode->next->data;
    free(currentNode->next);
    currentNode->next = NULL;
    return returnData;
}

int main() {

	node_type * head = NULL;
	head = malloc(sizeof(node_type));
	
	if (head == NULL) {
		return 1;
	}
	head->data = 0;
	head->next = NULL;
	
	srand(time(NULL));
	for(int i = 0; i< 10; i++){
		push(head,rand() % 100 + 1);
	}
	print_list(head);
	
	pop_last(head);
	pop_last(head);
	
	print_list(head);
	return 0;
}
