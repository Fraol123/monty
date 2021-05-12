#include "monty.h"

/**
 * op_mul - adds the values of the top two elements of the stack
 * @head: double pointer to head node
 * @line_number: line number being interpreted from Monty file
 *
 * Return: nothing, exit with code EXIT_FAILURE on failure
 */
void op_mul(stack_t **head, unsigned int line_number)
{
	int first, second;

	if (!head || !*head || !(*head)->next) /* short stack error */
		mul_error(head, line_number);
	first = (*head)->n;
	second = (*head)->next->n;
	*head = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
	(*head)->n = first * second;
}

