#include "monty.h"

/**
 * pall - prints the stack
 * @stack: pointer
 * @counter: no used
 *
 * Return: opcode of pall
 */
void pall(stack_t **stack, unsigned int counter)
{
	stack_t *s;
	(void)counter;

	s = *stack;

	if (s == NULL)

		return;

	while (s)
	{
		printf("%d\n", s->n);
		s = s->next;
	}
}
