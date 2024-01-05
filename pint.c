#include "monty.h"

/**
 * pint - prints the value at the top of the stack
 * @stack: pointer
 * @line_number: line index
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (tmp == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	};

	printf("%d\n", tmp->n);
}
