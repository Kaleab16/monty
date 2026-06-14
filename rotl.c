#include "monty.h"

/**
 * rotl - rotates the stack to the top
 * @stack: double pointer to the stack
 * @line_number: line number of the opcode
 */
void rotl(stack_t **stack, unsigned int line_number)
{
stack_t *first;
stack_t *last;
stack_t *current;
(void)line_number;

if (*stack == NULL || (*stack)->next == NULL)
return;

first = *stack;
last = first;

/* Find the last node */
while (last->next != NULL)
last = last->next;

/* Rotate: move top to bottom */
*stack = first->next;
(*stack)->prev = NULL;

last->next = first;
first->prev = last;
first->next = NULL;
}
