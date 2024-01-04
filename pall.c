#include "monty.h"

/**
 * pall - prints the stack
 * @stack: pointer
 * @counter: no used
 *
 * Return: opcode of pall
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *s;
	(void)line_number;

	s = *stack;

	if (s == NULL)
		return;

	while (s)
	{
		printf("%d\n", s->n);
		s = s->next;
	}
}
