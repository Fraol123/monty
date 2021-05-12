#ifndef __MONTY_H__
#define __MONTY_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>



/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* helper functions */
void (*get_op_func(char *str))(stack_t **stack, unsigned int line_number);
void free_stack(stack_t **stack);

/* opcode functions */
void op_push(stack_t **stack, unsigned int line_number);
void op_pall(stack_t **stack, unsigned int line_number);
void op_pint(stack_t **stack, unsigned int line_number);
void op_pop(stack_t **stack, unsigned int line_number);
void op_swap(stack_t **stack, unsigned int line_number);
void op_add(stack_t **stack, unsigned int line_number);
void op_nop(stack_t **stack, unsigned int line_number);
void op_sub(stack_t **stack, unsigned int line_number);
void op_div(stack_t **stack, unsigned int line_number);
void op_mul(stack_t **stack, unsigned int line_number);
void op_mod(stack_t **stack, unsigned int line_number);
void op_pchar(stack_t **stack, unsigned int line_number);


/* error handling functions */
void file_error(void);
void usage_error(void);
void malloc_error(stack_t **stack);

/* opcode error handling */
void opcode_error(stack_t **stack, unsigned int line_number);
void push_error(stack_t **stack, unsigned int line_number);
void pint_error(stack_t **stack, unsigned int line_number);
void pop_error(stack_t **stack, unsigned int line_number);
void swap_error(stack_t **stack, unsigned int line_number);
void add_error(stack_t **stack, unsigned int line_number);
void sub_error(stack_t **stack, unsigned int line_number);
void div_error(stack_t **stack, unsigned int line_number);
void zero_error(stack_t **stack, unsigned int line_number);
void mul_error(stack_t **stack, unsigned int line_number);
void mod_error(stack_t **stack, unsigned int line_number);
void pchar_error(stack_t **stack, unsigned int line_number);
void char_error(stack_t **stack, unsigned int line_number);


/**
 * struct stack_val - global shared variables
 * @n: value of new node
 * @file: Monty file being read
 * @opcode: parsed command token
 * @qu: switch to queue mode (FIFO) - 0 for off, 1 for on
 * Description: contains useful information for error handling
 */
struct stack_val
{
	char *n;
	char *file;
	char *opcode;
	int qu;
} stack_val;

#endif
