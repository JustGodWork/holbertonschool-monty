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

/**
 * free_all - free all the things
 * @line: line
 * @stack: stack
 * @file: file
 * Return: void
 */
void free_all(char *line, stack_t *stack, FILE *file)
{
	free(line);
	free_stack(stack);
	fclose(file);
}
