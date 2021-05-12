#include "monty.h"
/**
 * op_pop - removes the top element of the stack
 * @head: double pointer to head node
 * @line_number: line number where error occured
 *
 * Return: nothing, exit with code EXIT_FAILURE on failure
 */
void op_pop(stack_t **head, unsigned int line_number)
{
	stack_t *node;

	if (!head || !*head) /* empty stack error */
		pop_error(head, line_number);
	node = *head;
	if (!node->next)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		(*head) = (*head)->next;
		(*head)->prev = NULL;
		free(node);
	}
}
