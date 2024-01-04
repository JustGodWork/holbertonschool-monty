#include "monty.h"

/**
 * push - Opcode for pushes to the stack
 * @line_number: number of lines
<<<<<<< HEAD
 * @str: string
 *
 * Return: opcode of push
 *
 */
<<<<<<< HEAD
void push(unsigned int line_number, char *str)
=======
void push(stack_t **stack, unsigned int line_number, int n)
>>>>>>> origin/elie
=======
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
>>>>>>> d71498c37867666000c3298274a9b7bb571f1f0e
{

<<<<<<< HEAD
	int value = atoi(str);

	if (value == 0 || value < 0)
	{
		printf("L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
=======
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
>>>>>>> d71498c37867666000c3298274a9b7bb571f1f0e
}
