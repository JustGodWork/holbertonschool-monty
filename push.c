#include "monty.h"

/**
 * push - Opcode for pushes to the stack
 * @line_number: number of lines
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{

	stack_t *new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	};

	/* new_node->n need research */
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new_node;

	*stack = new_node;
}
