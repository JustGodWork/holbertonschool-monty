#include "monty.h"

/**
 * push - Opcode for pushes to the stack
 * @stack: pointer
 * @line_number: number of lines
 * @str: string
 *
 * Return: opcode of push
 *
 */
void push(stack_t **stack, unsigned int line_number, char *str)
{

	int value = atoi(str);

	if (value == 0 || value < 0)
	{
		printf("L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
}
