#include "monty.h"

/**
  * sub - subtracts the top element of the stack from the second
  * @stack: stack
  * @line_number: line number
  *
  * Return: Void
  */

void sub(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n -= (*stack)->n;
	pop(stack, line_number);
}
