#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
	int num;
	char *name;
	struct node *next;
};

void cleanup(struct node *p) {
	//remember the node to free, and then advance

	while (p != NULL) {
		struct node *temp = p;
		p = p->next;
		free(temp->name);
		free(temp);
	}

}

int main(void) {

	//construct new structs

	//build a linked list with a for loop
	int num = 10;
	int i;

	struct node *head = NULL;

	for(i=0;i<num;i++) {
		struct node *new_node = malloc(sizeof(struct node));

		new_node->num = i;

		new_node->name = malloc(sizeof(char));
		char see = 'c';
		strncpy(new_node->name, &see, 2);

		new_node->next = head;

		head = new_node;

	}

	struct node *head_copy = head;

	while (head_copy != NULL) {
		printf("This is node %d with name %s\n", head_copy->num, head_copy->name);
		head_copy = head_copy->next;
	}

	cleanup(head);

	return 0;
}
