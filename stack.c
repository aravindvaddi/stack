#include <stdlib.h>
#include "stack.h"

/* function to return the length of a stack */

int s_length (stack *s)
{
	int i;
	node *temp = s->head;

	for(i = 0; temp; i++, temp = temp->next);

	return i;
}

/* function to print all elements of a stack */

void s_print (stack *s)
{
	node *temp = s->head;
	while(temp)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

/* function to allocate memory to a given reference to a stack pointer */

void s_create (stack **s)
{
	*s = malloc(sizeof **s);
	s->head = NULL;
}
