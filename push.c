#include "monty.h"

/**
 * push - Opcode for pushes to the stack
 * @line_number: number of lines
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
{

	int value = atoi(str);

	if (value == 0 || value < 0)
	{
		printf("L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
}
