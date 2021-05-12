#include "monty.h"

/**
 * op_pall - prints all the values on the stack, starting from the top
 * @stack: double pointer to head node
 * @line_number: line number where opcode was encountered
 *
 * Return: nothing, exit with code EXIT_FAILURE on failure
 */
void op_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *node = NULL;

	if (!line_number)
/*an error should happen*/
		return;
	node = *stack;
	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
}

