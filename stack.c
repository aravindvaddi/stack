#include <stdio.h>
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

/* function to check if stack exists */

int s_exists (stack *s)
{
	return (s) ? 1 : 0;
}

/* function to check if stack is empty */

int s_empty (stack *s)
{
	return (!s->head) ? 1 : 0;
}

/* function to return value of element on top of stack */

int s_top (stack *s)
{
	if(s_empty(s))
		return -1;

	return s->head->data;
}

/* function to pop element from top of stack */

void s_pop (stack *s)
{
	node *temp;

	if(s_empty(s))
		return;

	temp = s->head;
	s->head = s->head->next;

	temp->data = 0;
	temp->next = NULL;
	free(temp);
	temp = NULL;
}

/* function to push element onto the stack */

void s_push (stack *s, int data)
{
	node *temp = malloc(sizeof *temp);
	temp->data = data;
	temp->next = s->head;
	s->head = temp;
}

/* function to allocate memory to a given reference to a stack pointer */

void s_create (stack **s)
{
	*s = malloc(sizeof **s);
	(*s)->head = NULL;
}

/* function to deallocate memory and destroy a stack */

void s_destroy (stack **s)
{
	stack *t = *s;

	while(!s_empty(t))
		s_pop(t);

	free(t);
	t = NULL;
	*s = NULL;
}
