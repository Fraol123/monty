#include "monty.h"
/**
 *file_error- shows when file can't be opened
 *
 */
void file_error(void)
{
	fprintf(stderr, "Error: Can't open file %s \n", stack_val.file);
	exit(EXIT_FAILURE);
}
/**
 *usage_error-shows when user inputs wrong syntax
 *
 */
void usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
/**
 *malloc_error- handles malloc errors
 *@stack: a ptr to a head node
 */
void malloc_error(stack_t **stack)
{
	fprintf(stderr, "Error: malloc failed \n");
	free_stack(stack);
	exit(EXIT_FAILURE);
}
/**
 *push_error-handles syntax error for op_push function
 *@stack: a ptr to head node
 *@line_number: linenumber  wear error ocured
 */
void push_error(stack_t **stack, unsigned int line_number)
{
	 fprintf(stderr, "L%d: usage: push integer\n", line_number);
	 free_stack(stack);
	 exit(EXIT_FAILURE);
}
