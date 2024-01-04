#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 * @stack: pointer
 * @line_number: line index
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *s;

	s = *stack;

	if (s == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	};

	printf("%d\n", s->n);
}