#include <stdio.h>
#include <stdlib.h>

// Initialize skip lists, take list of numbers from user
// Utilize C's dynamic memory management

struct Node {
	// Singly linked for now
	int element;
	struct Node* forward;
};

void main () {
	int i, n, elem;
	printf("How many elements? ");
	scanf("%d", &n);

	// Allocate n Nodes
	struct Node *ns, *head;
	head = NULL;


	printf("Enter the elements (integers): ");
	for(i = 0; i < n; i++) {
		scanf("%d", &elem);

		ns = malloc(n * sizeof(struct Node));
		if (ns == NULL) {
			printf("Out of memory, exiting.\n");
			exit(1);	
		}
		ns->element = elem;
		ns->forward = head;
		head = ns;
	}

	ns = head;
	
	while(ns) {
		printf("%d ->", ns->element);
		ns = ns->forward;
	}

	free(ns);	

}

// Implement a m-level skip list [m = log_2 n]

// Implement search

// Compare speed of search [with timeofday] against some in-built sort

// Implement insert

// Implement delete
