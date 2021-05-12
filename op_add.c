#include "monty.h"

/**
 * op_add - adds the values of the top two elements of the stack
 * @head: double pointer to head node
 * @line_number: line number being interpreted from Monty file
 *
 * Description: result is stored in 2nd top element, top element is removed
 * Return: nothing, exit with code EXIT_FAILURE on failure
 */
void op_add(stack_t **head, unsigned int line_number)
{
	int first, second;

	if (!head || !*head || !(*head)->next) /* short stack error */
		add_error(head, line_number);
	first = (*head)->n;
	second = (*head)->next->n;
	*head = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
	(*head)->n = first + second;
}

