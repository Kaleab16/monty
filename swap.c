#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @stack: double pointer to the stack
 * @line_number: line number of the opcode
 */
void swap(stack_t **stack, unsigned int line_number)
{
stack_t *first;
stack_t *second;
int temp;

if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
exit(EXIT_FAILURE);
}

first = *stack;
second = first->next;

temp = first->n;
first->n = second->n;
second->n = temp;
}
