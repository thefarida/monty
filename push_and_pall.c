#include "monty.h"

/**
 * f_pall - Print list
 * @stack_t - Double linked list
 * @line_number - File line for execution
 */

void f_pall(stack_t **head, unsigned int number);
{
	stack_t *tmp = *head;
	(void) line_number;

	if (!tmp)
		return;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
