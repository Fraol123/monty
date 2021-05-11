#include "monty.h"
/**
 *free_stack- frees all elements of stack
 *@stack: a ptr to the head node
 *
 */
void free_stack(stack_t **stack)
{
	stack_t *node = NULL;

	if (!stack || !*stack)
		return;
	while (*stack)
	{
		node = *stack;
		*stack = (*stack)->next;
		free(node);
	}
}

