#include "monty.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(int argc, char *argv[])
{
	stack_t *stack = NULL;
	FILE *file;
	char *line = NULL, *opcode = NULL;
	size_t len = 0;
	unsigned int line_number = 0;
	int n = 0;

	(void)argc;
	(void)argv;
	stack = malloc(sizeof(stack_t));

	if (!stack)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	};

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (getline(&line, &len, file) != -1)
	{
		line_number++;
		opcode = strtok(line, " \n\t\r");
		if (opcode == NULL || opcode[0] == '#')
			continue;
		if (strcmp(opcode, "push") == 0)
		{
			n = atoi(strtok(NULL, " \n\t\r"));
			push(&stack, line_number, n);
		}
		else
		{
			if (exec_handler(opcode, &stack, line_number))
				continue;
			else
			{
				fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
				exit(EXIT_FAILURE);
			};
		};
	};

	free(line);
	fclose(file);
	free_stack(stack);

	return (EXIT_SUCCESS);
}

