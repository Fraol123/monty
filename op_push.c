#include "monty.h"
/**
 * op_push - pushes a value to the top of the stack
 * @head: A pointer to head node
 * @line_number: line number where opcode was encountered
 */
void op_push(stack_t **head, unsigned int line_number)
{
	stack_t *new_node = NULL, *tail = NULL;
	size_t idx = 0;

	if (!head || !line_number)
		exit(EXIT_FAILURE);
	if (stack_val.n[idx] == '\0')
		push_error(head, line_number);
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
		malloc_error(head);
/* make sure string contains only numbers and '-' */
	while (stack_val.n[idx] != '\0')
	{
		if (isdigit(stack_val.n[idx]) == 0 && stack_val.n[idx] != '-')
			push_error(head, line_number);
		idx++;
	}
	new_node->n = atoi(stack_val.n);

	if (stack_val.qu == 1)
	{
		new_node->next = NULL;
		if (!*head)
		{
			new_node->prev = NULL;
			*head = new_node;
		}
		else
		{
			tail = *head;
			while (tail->next)
				tail = tail->next;
			new_node->prev = tail;
			tail->next = new_node;
		}
	}
	else
	{
		new_node->prev = NULL;
		new_node->next = *head;
		if (*head)
			(*head)->prev = new_node;
		*head = new_node;
	}
}

