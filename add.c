#include "monty.h"

/**
 * add - adds the top two elements of the stack
 * @stack: pointer to the top of the stack
 * @line_number: line number of the opcode
 *
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int sum;

	if (!temp || !temp->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	sum = temp->n + temp->next->n;
	temp->next->n = sum;
	*stack = temp->next;
	free(temp);
}
