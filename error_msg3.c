#include "monty.h"

/**
 *char_error- eror in chars
 *@stack: a ptr to head node
 *@line_number: number error occured at
 */

void char_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
/**
 *sub_error- handles error for op_sub
 *@stack: a ptr to head node
 *@line_number: a line wear error occured
 */
void sub_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
