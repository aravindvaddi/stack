#ifndef STACK_H
#define STACK_H

struct node
{
	int data;
	struct node *next;
};

struct stack
{
	struct node *head;
};

typedef struct node node;
typedef struct stack stack;

/* stack debugging + helper functions */

void s_print(stack *s);
int s_length(stack *s);

/* stack core functions */
int s_empty (stack *s);
int s_top(stack *s);
void s_pop(stack *s);
void s_push (stack *s, int data);

/* stack generate and destroy functions */

void s_create (stack **s);
void s_destroy (stack **s);

#endif
