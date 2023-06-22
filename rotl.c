#include "monty.h"

/**
  * rotl - rotates the stack at the top
  * @stack: stack
  * @line_number: line number
  *
  * Return: Void
  */

void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *top = NULL;
	stack_t *top2 = NULL;
	(void)line_number;

	top = *stack;

	if (top == NULL || top->next == NULL)
	{
		return;
	}

	top2 = top->next;
	while (top->next)
	{
		top = top->next;
	}

	top->next = *stack;
	(*stack)->prev = top;
	*stack = top2;
	top2->prev = NULL;
	top->next->next = NULL;
}
