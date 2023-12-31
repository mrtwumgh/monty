#include "monty.h"

/**
  * pint - prints the value of the top stack
  * @stack: stack
  * @line_number: line number
  *
  * Return: Void
  */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	fprintf(stdout, "%d\n", (*stack)->n);
}
