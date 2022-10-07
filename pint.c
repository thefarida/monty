#include "monty.h"

/**
 * pint - Print list
 * @stack - Double linked list
 * @line_number - File line for execution
 */

void pint(stack_t **stack, unsigned int line_number)
{

	if (!stack)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		free_all();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
