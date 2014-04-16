#include <stdio.h>
#include <stdlib.h>

struct node {
        int v;
        struct node *next;
};

void f(int v, struct node *s) {
	s->v = v;
	s->next = NULL;
}

int main(void) {
	int value = 10;
	struct node *newnode;
	f(value, newnode);

	printf("%d\n", newnode->v);

	return 0;
}
