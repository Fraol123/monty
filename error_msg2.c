#include "monty.h"

/**
 * sub_error - handles error for op_sub function
 * @stack: a pointer to head node
 * @line_number: line number where error occured
 *
 */
void sub_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
