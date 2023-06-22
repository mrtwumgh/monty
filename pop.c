#include "monty.h"

/**
  * pop - removes the top most element of the stack
  * @stack: stack
  * @line_number: line number
  *
  * Return: Void
  */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *current = NULL;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	current = *stack;
	*stack = (*stack)->next;

	if (*stack)
		(*stack)->prev = NULL;
	free(current);
}
