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
		{NULL, NULL}
	};
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		if (strcmp(opcode, opcodes[i].opcode) == 0)
			return (opcodes[i].f);
	}

	return (NULL);
}
