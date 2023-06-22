#include "monty.h"

/**
  * pall - prints all elements of the stack
  * @stack: stack
  * @line_number: line number
  *
  * Return: Void
  */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr = NULL;
	(void)line_number;
	ptr = *stack;

	while (ptr)
	{
		fprintf(stdout, "%d\n", ptr->n);
		ptr = ptr->next;
	}
}
