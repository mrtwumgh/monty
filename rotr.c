#include "monty.h"

/**
  * rotr - rotates the stack to the bottom
  * @stack: stack
  * @line_number: line number
  *
  * Return: Void
  */

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *end = NULL;
	(void)line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;
	
	while (end->next)
		end = end->next;
	
	end->next = *stack;
	(*stack)->prev = end;
	*stack = end;
	end->prev->next = NULL;
	end->prev = NULL;
}
