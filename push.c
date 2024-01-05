#include "monty.h"

/**
 * check_digit - checks if the string is a digit
 * @token: string to check
 * Return: 0 if success, 1 if not
 */
int check_digit(char *token)
{
	int i = 0;

	if (token == NULL)
		return (1);
	if (token[0] == '-')
		i = 1;
	for (; token[i] != '\0'; i++)
	{
		if (isdigit(token[i]) == 0)
			return (1);
	}
	return (0);
}

/**
 * push - Opcode for pushes to the stack
 * @line_number: number of lines
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = NULL;
	char *token = NULL;
	int num = 0;

	token = strtok(NULL, " \n\t\r");
	if (token == NULL || check_digit(token) == 1)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	num = atoi(token);
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = num;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*stack == NULL)
	{
		*stack = new_node;
		return;
	}
	new_node->next = *stack;
	(*stack)->prev = new_node;
	*stack = new_node;
}
