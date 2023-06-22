#include "monty.h"

/**
  * push - pushes elements onto the stack
  * @stack: stack
  * @line_number: line number
  *
  * Return: Void
  */

void push(stack_t **stack, unsigned int line_number)
{
	char *arg = NULL;
	int value;
	stack_t *newNode = NULL;

	arg = strtok(NULL, " \t\n");
	if (arg == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (!isdigit(*arg) && *arg != '-')
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	value = atoi(arg);
	newNode = (stack_t *)malloc(sizeof(stack_t));
	if (newNode == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	newNode->n = value;
	newNode->prev = NULL;
	newNode->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = newNode;
	*stack = newNode;
}
