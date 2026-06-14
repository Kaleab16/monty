#include "monty.h"

/**
 * sub - subtracts the top element from the second top element
 * @stack: double pointer to the stack
 * @line_number: line number of the opcode
 */
void sub(stack_t **stack, unsigned int line_number)
{
stack_t *first;
stack_t *second;

if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
exit(EXIT_FAILURE);
}

first = *stack;
second = first->next;

second->n = second->n - first->n;
*stack = second;
(*stack)->prev = NULL;
free(first);
}
