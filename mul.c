#include "monty.h"

/**
  * mul - multiples the second top element with the top element
  * @stack: stack
  * @line_number: line number
  *
  * Return: Void
  */

void mul(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n *= (*stack)->n;
	pop(stack, line_number);
}
