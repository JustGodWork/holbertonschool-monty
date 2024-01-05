#include "monty.h"

/**
 * exec_handler - get the opcode
 * @opcode: opcode
 * @stack: pointer to the stack
 * @line_number: line index
 * Return: 1 if success, 0 if opcode not found
 */
int exec_handler(char *opcode, stack_t **stack, unsigned int line_number)
{
	instruction_t instructions[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};
	int i = 0;

	while (instructions[i].opcode)
	{
		if (strcmp(opcode, instructions[i].opcode) == 0)
		{
			instructions[i].f(stack, line_number);
			return (1);
		};
		i++;
	};

	return (0);
}
