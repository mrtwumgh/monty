#include "monty.h"

/**
  * get_opcode - retrieves the appropriate function for the opcode
  * @opcode: opcodee
  *
  * Return: Void
  */

void (*get_opcode(char *opcode))(stack_t **, unsigned int)
{
	instruction_t opcodes[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", my_div},
		{"mul", mul},
		{"mod", mod},
		{NULL, NULL}
	};
	int i = 0;

	for (i = 0; i < 11; i++)
	{
		if (strcmp(opcode, opcodes[i].opcode) == 0)
			return (opcodes[i].f);
	}

	return (NULL);
}
