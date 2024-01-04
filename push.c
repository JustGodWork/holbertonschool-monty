#include "monty.h"

/**
 * push - Opcode for pushes to the stack
 * @stack: pointer
 * @line_number: number of lines
 * @n: integer
 *
 * Return: opcode of push
 *
 */
void push(stack_t **stack, unsigned int line_number, int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = n;
	new_node->prev = NULL;

	new_node->next = (*stack);
	(*stack) = new_node;
}
