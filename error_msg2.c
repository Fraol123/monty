#include "monty.h"


/**
 * div_error - handles error for op_div function
 * @stack: a  pointer to head node
 * @line_number: line number where error occured
 *
 * Return: nothing
 */
void div_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}

/**
 * zero_error -  handles the zerro erro for op_div function program
 * @stack: a pointer to head node
 * @line_number: line number where error occured
 *
 */
void zero_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: division by zero\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
/**
 * mul_error - op_mul error handling program
 * @stack: double pointer to head node
 * @line_number: line number where error occured
 *
 * Return: nothing
 */
void mul_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
/**
 * mod_error - handles error for op_mod function
 * @stack: a  pointer to head node
 * @line_number: line number where error occured
 *
 */
void mod_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
/**
 * pchar_error - handles stack error for oP_char
 * @stack: a pointer to head node
 * @line_number: line number where error occured
 *
 */
void pchar_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}

