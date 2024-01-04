#include "monty.h"

/**
 * pall - prints the stack
 * @stack: pointer
 * @line_number: no used
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *s;
	(void)line_number;

	s = *stack;

	if (s)
		while (s)
		{
			printf("%d\n", s->n);
			s = s->next;
		};
}
