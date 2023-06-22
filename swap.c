#include "monty.h"

/**
  * swap - swaps the top two elements
  * @stack: stack
  * @line_number: line number
  *
  * Return: Void
  */

void swap(stack_t **stack, unsigned int line_number)
{
	int tmp = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = tmp;
}
