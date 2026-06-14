#include "monty.h"

/* Default mode is stack (LIFO) */
int mode = 0;

/**
 * stack_mode - sets the format to stack (LIFO)
 * @stack: double pointer to the stack
 * @line_number: line number of the opcode
 */
void stack_mode(stack_t **stack, unsigned int line_number)
{
(void)stack;
(void)line_number;
mode = 0;
}

/**
 * queue_mode - sets the format to queue (FIFO)
 * @stack: double pointer to the stack
 * @line_number: line number of the opcode
 */
void queue_mode(stack_t **stack, unsigned int line_number)
{
(void)stack;
(void)line_number;
mode = 1;
}
