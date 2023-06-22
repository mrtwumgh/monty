#include "monty.h"

/**
  * file_parser - parses a file
  * @file: file to be parsed
  *
  * Return: Void
  */

void file_parser(FILE *file)
{
	char *line = NULL;
	size_t len = 0;
	unsigned int line_number = 0;
	void (*opcode_func)(stack_t **, unsigned int);
	char *opcode;

	while (getline(&line, &len, file) != -1)
	{
		line_number++;

		opcode = strtok(line, " \t\n");

		if (opcode == NULL || opcode[0] == '#')
			continue;

		opcode_func = get_opcode(opcode);

		if (opcode_func == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
			exit(EXIT_FAILURE);
		}

		opcode_func(&global_stack, line_number);
	}
	free(line);
}
