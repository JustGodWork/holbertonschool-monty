#include "monty.h"

/**
 * free_stack - free the stack
 * @head: pointer to the stack
 * Return: void
 */
void free_stack(stack_t *head)
{
	stack_t *s;

	s = head;

	while (s)
	{
		s = s->next;
		free(head);
		head = s;
	};
}
