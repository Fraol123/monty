#include "monty.h"

/**
 * op_pchar - prints the value at the top of the stack as a character
 * @head: a pointer to head node of stack
 * @line_number: line number being interpreted from Monty file
 *
 */
void op_pchar(stack_t **head, unsigned int line_number)
{
	if (!head || !*head) /* empty stack error */
		pchar_error(head, line_number);
	if ((*head)->n > 127 || (*head)->n < 0)
		char_error(head, line_number);
	printf("%c\n", (*head)->n);
}

