#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: pointer
 * @line_number: line index
 * Return: void
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *s;

	s = *stack;

	if (s == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	};

	*stack = s->next;
	free(s);
}
