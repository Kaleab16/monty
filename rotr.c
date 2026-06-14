#include "monty.h"

/**
 * rotr - rotates the stack to the bottom
 * @stack: double pointer to the stack
 * @line_number: line number of the opcode
 */
void rotr(stack_t **stack, unsigned int line_number)
{
stack_t *first;
stack_t *last;
stack_t *second_last;
(void)line_number;

if (*stack == NULL || (*stack)->next == NULL)
return;

first = *stack;
last = first;

/* Find the last node */
while (last->next != NULL)
last = last->next;

/* Find the second last node */
second_last = last->prev;

/* Rotate: move bottom to top */
last->next = first;
last->prev = NULL;
first->prev = last;
second_last->next = NULL;

*stack = last;
}
