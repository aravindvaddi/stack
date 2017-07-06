#include <stdio.h>
#include "stack.h"

int main ()
{
	int i;
	stack *s = NULL;

	printf("Before creating:\n");
	printf("%s\n\n", s_exists(s) ? "stack exists" : "stack doesn't exist");

	s_create(&s);

	printf("After creating:\n");
	printf("%s\n\n", s_exists(s) ? "stack exists" : "stack doesn't exist");

	printf("Before pushing:\n");
	s_print(s);
	printf("Top of stack: %d\n", s_top(s));
	printf("Length: %d\n\n", s_length(s));

	printf("Pushing 10 elements:\n");

	for(i = 0; i < 10; i++)
	{
		s_push(s, i);
		s_print(s);
		printf("Top of stack: %d\n", s_top(s));
		printf("Length: %d\n\n", s_length(s));
	}

	printf("Popping 10 elements:\n");
	for(i = 10; i > 0; i--)
	{
		s_pop(s);
		s_print(s);
		printf("Top of stack: %d\n", s_top(s));
		printf("Length: %d\n\n", s_length(s));
	}

	printf("After popping:\n");
	s_print(s);
	printf("Top of stack: %d\n", s_top(s));
	printf("Length: %d\n\n", s_length(s));

	printf("Before destroying:\n");
	printf("%s\n\n", s_exists(s) ? "stack exists" : "stack doesn't exist");

	s_destroy(&s);

	printf("After destroying:\n");
	printf("%s\n\n", s_exists(s) ? "stack exists" : "stack doesn't exist");

	return 0;
}
