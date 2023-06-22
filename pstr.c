#include "monty.h"

/**
  * pstr - prints the string starting at the top of stack
  * @stack: stack
  * @line_number: line number
  *
  * Return: Void
  */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr = NULL;
	(void)line_number;

	ptr = *stack;

	while (ptr != NULL && ptr->n != 0)
	{
		if (ptr->n >= 0 && ptr->n <= 127)
		{
			fprintf(stdout, "%c", ptr->n);
			ptr = ptr->next;
		}
	}
	fprintf(stdout, "\n");
}
