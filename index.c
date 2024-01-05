#include "monty.h"

void free_all(char *line, stack_t *stack, FILE *file)
{
	free(line);
	free_stack(stack);
	fclose(file);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(int argc, char *argv[])
{
	FILE *file = NULL;
	stack_t *stack = NULL;
	char *line = NULL, *opcode = NULL;
	size_t len = 0;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	};

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	};
	while (getline(&line, &len, file) != -1)
	{
		line_number++;
		opcode = strtok(line, " \n\t\r");
		if (opcode == NULL || opcode[0] == '#')
			continue;
		if (exec_handler(opcode, &stack, line_number))
			continue;
		else
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
			free_all(line, stack, file);
			return (EXIT_FAILURE);
		};
	};

	free_all(line, stack, file);

	return (EXIT_SUCCESS);
}
